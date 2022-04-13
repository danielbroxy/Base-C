#include <iostream>
#include <queue>
#include <stack>
using namespace std;
template <typename T>
T reverse_queue(queue <T> & q)
{
    stack<T> tmp;
    while (!q.empty ())
    {
        tmp.push(q.front());
        q.pop();
    }
    while (!tmp.empty())
    {
        q.push(tmp.top());
        tmp.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    reverse_queue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}




