#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int p,x,y;
    cin>>p>>x>>y;
    int deposit = x*100+y;
    float k = 1.0+(float)p/100.0;
    float result = trunc((float)deposit*k);
    cout<<(int)result/100<<" "<<(int)result%100;
}
