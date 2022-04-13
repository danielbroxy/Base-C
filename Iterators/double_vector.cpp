#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void double_vector(vector<T> & a)
{
    for (int i = (int)a.size() - 1; i >= 0; --i)
        a.push_back(a[i]);
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    double_vector(a);
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << " ";
    return 0;
}
