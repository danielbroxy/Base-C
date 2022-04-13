#include <iostream>
#include <vector>
using namespace std;
template <typename iter>
void reverse_vector(iter begin, iter end)
{
    --end;
    while ( begin < end)
    {
        swap(*begin, *end);
        ++begin;
        --end;
    }
}

int main()
{
    vector<int> a;
    for (int i = 0; i < 10; ++i)
        a.push_back(i);
    reverse_vector(a.begin() + 2, a.begin() + 7);
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << " ";
}

