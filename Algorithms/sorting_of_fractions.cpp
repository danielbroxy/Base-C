#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <tuple>
using namespace std;
// Наибольший общий делитель
int NOD(int n1, int n2)
{
  int div;
  if (n1 == n2)  return n1;
  int d = n1 - n2;
  if (d < 0) {
    d = -d;  div = NOD(n1, d);
  } else
    div = NOD(n2, d);
  return div;
}
// Наименьшее общее кратное
int NOK(int n1, int n2)
{
  return n1*n2 / NOD(n1, n2);
}
int main()
{
    ifstream f("input.txt");
    int N;
    f>>N;
    vector<tuple<int, int, int>> fracts(N);
    for (int i = 0; i<N; ++i)
    {
        string fract, string_first, string_second;
        f>>fract;
        int counter = 0;
        while (true)
        {
            if (fract[counter] != '/')
            {
                string_first.push_back (fract[counter]);
                ++counter;
            }
            else
            {
                ++counter;
                break;
            }
        }
        while (true)
        {
            if (counter != fract.size())
            {
                 string_second.push_back (fract[counter]);
                 ++counter;
            }
            else
                break;
        }
        get<1>(fracts[i]) = stoi(string_first);
        get<2>(fracts[i]) = stoi(string_second);
    }
    int naim = NOK(get<2>(fracts[0]), get<2>(fracts[1]));
    for (int i = 2; i<N; i++)
    {
        naim = NOK(naim, get<2>(fracts[i]));
    }
    for (int i = 0; i<N; ++i)
    {
        get<0>(fracts[i]) = (naim/get<2>(fracts[i]))*get<1>(fracts[i]);
    }
    sort(fracts.begin(), fracts.end());
    for (int i = 0; i<N; ++i)
    {
        cout<<get<1>(fracts[i])<<'/'<<get<2>(fracts[i])<<endl;
    }
    return 0;
}
