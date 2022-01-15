#include <stdio.h>
int main()
{
    int n;
    scanf ("%d", &n);
    int min_d = 9;
    int max_d = 0;
    while (n > 0)
    {
        if (n % 10 < min_d)
            min_d = n % 10;
        if (n % 10 > max_d)
            max_d = n % 10;
        n /= 10;
    }
    printf("%d %d\n", min_d, max_d);
}
