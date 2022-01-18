#include <iostream>
void trunc(int &n)
{
    n = n/10*10;
}
int main()
{
    int n = 123;
    trunc(n); std::cout << n << std::endl;
}
