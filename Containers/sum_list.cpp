#include <iostream>
#include <list>
using namespace std;

template <typename T>
T sum_list(list<T> & s)
{
    T res = 0;
    for (typename list<T>::iterator it = s.begin(); it != s.end(); ++it)
    res += *it;
    return res;
}

int main()
{
    list<int> s; s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    cout << sum_list(s) << " ";
    cout << s.size() << " ";
    cout << s.back() << endl;
    return 0;
}
