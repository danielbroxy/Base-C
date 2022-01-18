#include<stdio.h>
int main()
{
    const double EPS = 1e-9;
    double x, y;
    scanf("%lf%lf", &x, &y);
    int n = 1;
    while (x < y - EPS)
    {
        x *= 1.7;
        n++;
    }
    printf("%d", n);
}
