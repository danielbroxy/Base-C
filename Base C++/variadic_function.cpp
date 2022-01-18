#include <iostream>
using namespace std;
int max(int a, int b = 0, int c = 0)
{
    if (a>b)
    {
        if (a>c)
            return a;
        else
            return c;
    }
    else
    {
        if (b>c)
            return b;
        else
            return c;
    }
}
int main()
{
    cout << max(1) << " "; cout << max(1, 2) << " "; cout << max(1, 2, 3) << endl;
}
