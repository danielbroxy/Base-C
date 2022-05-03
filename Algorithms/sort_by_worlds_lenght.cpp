#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream f("input.txt");
    int N;
    f>>N;
    vector<pair <int,string>> words(N);
    for (int i = 0; i<N; ++i)
    {
        f>>words[i].second;
        words[i].first = words[i].second.size();
    }
    sort(words.begin(), words.end());
    for (int i = 0; i<N; ++i)
    {
        cout<<words[i].second<<endl;
    }
    return 0;
}
