#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    x1 = (-b - sqrt(d)) / 2 / a;
    x2 = (-b + sqrt(d)) / 2 / a ;
    if (x1 < x2)
        printf("%lf %lf\n", x1, x2);
    else
        printf("%lf %lf\n", x2, x1);
    return 0;
}
