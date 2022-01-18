#include <fstream>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int m = 0;
    int n;
    while (fin >> n)
    {
        fin>>n;
        if (n>m)
            m = n;
    }
    fout<<m;
    fin.close();
    fout.close();
}
