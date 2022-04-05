#include<iostream>

using namespace std;

template <typename T>
class dynamic_array
{
 private:
    int m_size;
    int m_capacity;
    T * m_data;

 public:
    dynamic_array()
    {
        m_size = 0;
        m_capacity = 0;
        m_data = NULL;
    }

    dynamic_array(const dynamic_array<T> & a)
    {
        m_size = a.m_size;
        m_capacity = m_size;
        m_data = NULL;
        if (m_size != 0)
            m_data = new T[m_size];
        else
            m_data = 0;
        for (int i = 0; i < m_size; ++i)
            m_data[i] = a.m_data[i];
    }

    dynamic_array(int size)
    {
        m_size = size;
        m_capacity = size;
        if (size != 0)
            m_data = new T[size];
        else
            m_data = 0;
    }

    ~dynamic_array()
    {
        if (m_data)
            delete[] m_data;
    }

    int resize(int size)
    {
        if (size > m_capacity)
        {
            int new_capacity = max(size, m_size * 2);
            T * new_data = new T[new_capacity];
            for (int i = 0; i < m_size; ++i)
                new_data[i] = m_data[i];
            delete[] m_data;
            m_data = new_data;
            m_capacity = new_capacity;
        }
        m_size = size;
    }

    void push_back(T val)
    {
        resize(m_size + 1);
        m_data[m_size - 1] = val;
    }

    int size() const
    {
        return m_size;
    }

    T & operator[] (int i)
    {
        return m_data[i];
    }
    void insert(int pos, T val)
    {
        resize(m_size + 1);
        for (int i = m_size - 1; i > pos; --i)
            m_data[i] = m_data[i - 1];
        m_data[pos] = val;
    }
};

template<typename T>
ostream & operator << (ostream & out, dynamic_array<T> a)
{
    for (int i = 0; i < a.size(); ++i)
        out << a[i] << " ";
    return out;
}

template<typename T>
T max(dynamic_array<T> & a)
{
    T result = a[0];
    for (int i = 1; i < a.size(); ++i)
        if (a[i] > result)
            result = a[i];
    return result;
}

template<typename T>
void sort(dynamic_array <T> & a)
{
    for (int i = a.size(); i > 0; --i)
        for (int j = 1; j < i; ++j)
            if (a[j - 1] > a[j])
                swap(a[j - 1], a[j]);
}

template<typename T>
dynamic_array<T> operator+ (dynamic_array<T> a, dynamic_array<T> b)
{
    dynamic_array<T> res(a.size() + b.size());
    for (int i = 0; i < a.size(); ++i)
        res[i] = a[i];
    for (int i = 0; i < b.size(); ++i)
        res[i + a.size()] = b[i];
    return res;
}

template <typename T>
class Stack: public dynamic_array<T>
{
    public:
        void push(T t)
        {
            this->push_back(t);
        }
        T top ()
        {
            return (*this)[this->size() - 1];
        }
        void pop()
        {
            this->resize(this->size() - 1);
        }
        bool empty()
        {
            return this->size() == 0;
        }
};

int main ()
{
    dynamic_array<int> a(5);
    for (int i = 0; i < a.size(); ++i)
    a[i] = i;
    cout << a << endl;
    a.insert(3, 10);
    cout << a << endl;
    a.insert(6, 20);
    cout << a << endl;
    dynamic_array<int> b(10);
    for (int i = 0; i < b.size(); ++i)
        b[i] = i * 3 % 10;
    cout << b << endl;
    cout << max(b) << endl;
    dynamic_array<int> c(10);
    for (int i = 0; i < c.size(); ++i)
        c[i] = i * 3 % 10;
    cout << c << endl;
    sort(c);
    cout << c << endl;
    dynamic_array<int> d(5);
    for (int i = 0; i < d.size(); ++i)
        d[i] = i;
    dynamic_array<int> e(3);
    for (int i = 0; i < e.size(); ++i)
        e[i] = 10 * i;
    cout << d << endl;
    cout << e << endl;
    cout << d + e << endl;
    Stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    while (!S.empty())
    {
        cout << S.top() << endl;
        S.pop();
    }
}

