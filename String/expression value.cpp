#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char op ;
    cin >> a >> op >> b;
    if (op == '+')
        cout << a + b << endl;
    else if (op == '-')
        cout << a - b << endl;
    else
        cout << (long long) a * b << endl;
}