#include <iostream>
#include <iomanip>
#include "currency.h"
using namespace std;

int main()
{
    currency t1(10, 5);
    t1.print();
    cout << endl;
    currency t2(1, 250);
    t2.print();
    cout << endl;
    currency t3(10, 60);
    t3.round().print();
    cout << endl;
    t3.print(); cout << endl;
    currency a1(10, 60);
    currency b1(10, 61);
    if (a1 == b1) cout << "YES" << endl;
        else cout << "NO" << endl;
    currency a2(5, 40);
    currency b2(5, 80);
    currency c2 = a2 + b2 ;
    c2.print();cout<<endl;
    c2 = b2 - a2;
    c2.print();cout<<endl;
    currency a3(5, 40);
    currency c3 = a3 * 2 ;
    c3.print(); cout<<endl;
    c3 = 3 * a3;
    c3.print();cout<<endl;
    currency s4(10, 5);
    cout << s4 << endl;
    return 0;
}
