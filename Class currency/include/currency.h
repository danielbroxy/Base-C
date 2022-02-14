#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <iomanip>
using namespace std;
class currency
{
    private:
        int m_rub;
        int m_cop;
    public:
        currency(int a=0, int b=0);
        void print();
        int rub();
        int cop();
        currency round();
        bool operator==( currency & right) ;
        bool operator!=( currency & right) ;
        bool operator<( currency & right) ;
        bool operator<=( currency & right) ;
        bool operator>( currency & right) ;
        bool operator>=( currency & right) ;
        currency operator+( currency & right) ;
        currency operator-( currency & right) ;
        currency operator*(int n) ;
        friend istream & operator>> (istream & in, currency & s);
};
currency operator*(int n,  currency & s);
ostream & operator<< (ostream & out,  currency & s);
#endif // CURRENCY_H
