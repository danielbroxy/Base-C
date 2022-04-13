#include <iostream>
#include <vector>
using namespace std;
template <typename iter>
void print_vector(iter begin, iter end)
{
    for (begin;begin!=end;++begin)
    {
        cout<<*begin<<" ";
    }
}

int main()
{
    vector<int> a;
    for (int i = 0; i < 10; ++i)
        a.push_back(i);
    print_vector(a.begin() + 2, a.begin() + 7);
}
