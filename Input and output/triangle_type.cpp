#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b)
        swap(a,b);
    if (b>c)
        swap(b,c);
    if (a>b)
        swap(a,b);
    if ((c>a+b)&(a>b+c)&(b>a+c))
        cout<<"imbossible";
    else if ((c*c)==(a*a)+(b*b))
        cout<<"rectangular";
    else if ((c*c)>=(a*a)+(b*b))
        cout<<"obtuse";
    else
        cout<<"acute";
}
