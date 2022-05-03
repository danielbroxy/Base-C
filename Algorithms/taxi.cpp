#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <tuple>
using namespace std;
int main()
{
    ifstream f("input.txt");
    int N;
    f>>N;
    vector<pair<int, int>> empl (N);
    for (int i = 0; i<N; ++i)
    {
        f>>empl[i].first;
        empl[i].second = i;
    }
    vector<pair<int, int>> rate (N);
    for (int i = 0; i<N; ++i)
    {
        f>>rate[i].first;
        rate[i].second = i;
    }
    sort(rate.rbegin(), rate.rend());
    sort(empl.begin(), empl.end());
    int min_price = 0;
    int tmp = 0;
    for (int i = 0; i<N; ++i)
    {
        min_price += empl[i].first*rate[i].first;
    }
    cout<<min_price<<endl;
    vector<pair<int, int>> final_result (N);
    for (int i = 0; i<N; ++i)
    {
       final_result[i].first =  empl[i].second;
       final_result[i].second = rate[i].second;
    }
    sort(final_result.begin(), final_result.end());
    for (int i = 0; i<N; ++i)
    {
        cout<<final_result[i].second+1<<' ';
    }
    return 0;
}
