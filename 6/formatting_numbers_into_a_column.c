#include<stdio.h>
int main()
{
    int n;
    double a[100], m = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%lf", &a[i]);
        if (a[i] > m)
            m = a[i];
    }
    double pow = 10;
    int width = 1;
    while (m >= pow)
    {
        pow *= 10;
        width += 1 ;
    }
    for (int i = 0; i < n; ++i)
        printf("%*.2f\n", width + 3, a[i]);
    return 0;
}
