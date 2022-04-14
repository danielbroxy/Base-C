#include <iostream>
#include <list>
using namespace std;

template <typename T>
void order_list(list< T> & s)
{
    typename list<T>::iterator it = s.begin();
    for (int i = 0; i < s.size(); ++i)
    if (*it % 2 == 0)
    {
        s.push_back(*it);
        it = s.erase(it);
    }
    else
        ++it;
}

int main()
{
list<int> s;
s.push_back(1);
s.push_back(2);
s.push_back(3);
s.push_back(4);
order_list(s);
for (list<int>::iterator it = s.begin(); it !=s.end(); ++it)
    cout << *it << " ";
}

