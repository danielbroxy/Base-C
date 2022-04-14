#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main ()
{
    string onetext;
    set <string> outtext;
    ifstream f;
    f.open("input.txt");
    int counter = 0;
    while (!f.eof())
    {
        f>>onetext;
        outtext.insert(onetext);
    }
    f.close();
    cout<<outtext.size();
    return 0;
}
