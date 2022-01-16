#include<stdio.h>
int power(int a, int n)
{
    a %= 1000;
    if (n == 0)
        return 1;
    else if (n % 2 == 1)
        return a * power( a, n - 1) % 1000;
    else
        return power(a * a % 1000, n / 2);
}
int main()
{
    int a, n;
    scanf("%d%d", &a, &n);
    printf("%d\n", power(a , n));
}
