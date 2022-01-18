#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tick1, tick10, tick60;
    if (((n%60)/10)>3)
    {
        tick60=(n/60)+1;
        n=0;
    }
    else
    {
        tick60=n/60;
        n%=60;
    }
    if (n%10>8)
    {
        tick10=(n/10)+1;
        tick1=0;
    }
    else
    {
        tick10=n/10;
        tick1=n%10;
    }
    cout<<tick1<<" "<<tick10<<" "<<tick60;
}
