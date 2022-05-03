#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int S, N;
    ifstream f("input.txt");
    f>>S;
    f>>N;
    vector<pair<int, string>> arch(S);
    for (int i = 0; i<N; ++i)
    {
        f>>arch[i].second;
        f>>arch[i].first;
    }
    sort(arch.rbegin(), arch.rend());
    int K = 0;
    int counter = 0;
    vector<string> res_names;
    while (S>0)
    {
        if (arch[counter].first<=S)
        {
           S -= arch[counter].first;
           res_names.push_back(arch[counter].second);
           ++counter;
           ++K;
        }
        else
            break;
    }
    cout<<K<<endl;
    for (int i = 0; i<res_names.size(); ++i)
    {
        cout<<res_names[i]<<endl;
    }
    return 0;
}
