#include <iostream>
#include <stack>
using namespace std;
template <typename T>
T sum_stack(stack<T> & s)
{
    T res = 0;
    stack<T> tmp;
    while (!s.empty ())
    {
        res += s.top();
        tmp.push(s.top());
        s.pop();
    }
    while (!tmp.empty())
    {
        s.push(tmp.top());
        tmp.pop();
    }
    return res;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << sum_stack(s) << " ";
    cout << s.size() << " ";
    cout << s.top() << endl;
}



