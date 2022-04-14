#include <iostream>
#include <fstream>
#include <string>
#include <set>
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
        cout<<outtext.count(onetext)-1<<" ";
    }
    f.close();
    return 0;
}
