#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    string name;
    int result;
    ifstream f("input.txt");
    f>>N;
    vector<pair<int, string>> a(N);
    for (int i = 0; i<N; ++i)
    {
        f>>name;
        f>>result;
        a[i] = {result, name};
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i<N; ++i)
    {
        cout<<a[i].second<<endl;
    }
    return 0;
}
