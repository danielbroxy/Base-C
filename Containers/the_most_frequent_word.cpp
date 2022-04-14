#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main ()
{
    string onetext;
    multiset <string> outtext;
    ifstream f;
    f.open("input.txt");
    while (!f.eof())
    {
        f>>onetext;
        outtext.insert(onetext);
    }
    f.close();
    string result;
    int count_result = 0;
    for (auto elem: outtext)
    {
        if (count_result < outtext.count(elem))
        {
            result = elem;
            count_result = outtext.count(elem);
        }
        else if (count_result == outtext.count(elem))
        {
            if (elem < result)
            {
               result = elem;
            }
        }
    }
    cout<<result;
    return 0;
}
