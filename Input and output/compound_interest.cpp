#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int p,x,y,k;
    cin>>p>>x>>y>>k;
    int deposit = x*100+y;
    float coef = 1.0+(float)p/100.0;
    float result;
    for(int i = 0; i<k; ++i)
        deposit = trunc((float)deposit*coef);
    cout<<(int)deposit/100<<" "<<(int)deposit%100;
}
