#include "currency.h"
#include <iostream>
#include <iomanip>
using namespace std;
currency::currency(int a, int b)
{
    m_cop = b%100;
    m_rub = a+b/100;
}
void currency::print()
{
    cout<<m_rub<<"-"<<setfill('0')<<setw(2)<<m_cop;
}
int currency::rub()
{
    return m_rub;
}
int currency::cop()
{
    return m_cop;
}
currency currency::round()
{
    if (m_cop < 50)
        return currency(m_rub, 0);
    else
        return currency(m_rub + 1, 0);
}
bool currency::operator==(currency & right)
{
    return 100*rub()+cop() == 100*right.rub()+right.cop();
}
bool currency::operator!=( currency & right)
{
    return 100 * rub() + cop() != 100 * right.rub() + right.cop();
}
bool currency::operator<( currency & right)
{
    return 100 * rub() + cop() < 100 * right.rub() + right.cop();
}
bool currency::operator<=( currency & right)
{
    return 100 * rub() + cop() <= 100 * right.rub() + right.cop();
}
bool currency::operator>( currency & right)
{
    return 100 * rub() + cop() > 100 * right.rub() + right.cop();
}
bool currency::operator>=( currency & right)
{
    return 100 * rub() + cop() >= 100 * right.rub() + right.cop();
}
currency currency::operator+( currency & right)
{
    int res = 100 * rub() + cop() + 100 * right.rub() + right.cop();
    return currency(res / 100, res % 100);
}
currency currency::operator-( currency & right)
{
    int res = 100 * rub() + cop() - 100 * right.rub() - right.cop();
    return currency(res / 100, res % 100);
}
currency currency::operator*(int n)
{
    int res = n * (100 * rub() + cop());
    return currency(res / 100, res % 100);
}
currency operator*(int n, currency & s)
{
    int res = n * (100 * s.rub() + s.cop());
    return currency(res / 100, res % 100) ;
}
ostream & operator<< (ostream & out, currency & s)
{
    out << s.rub() << "-" << setw(2) << setfill('0') << s.cop();
    return out;
}
istream & operator>> (istream & in, currency & s)
{
    char c;
    in >> s.m_rub >> c >> s.m_cop;
    return in;
}

