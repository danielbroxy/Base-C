#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (fabs(a + b - c) < 1e-8)
        printf("YES");
    else
        printf("NO");
}
