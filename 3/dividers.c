#include <stdio.h>

int main()
{
    int n;
    int d = 1;
    scanf("%d", &n);
    while (d!=n+1)
    {
        if (n%d==0)
        {
            printf("%d ", d);
        }
        d++;
    }
    return 0;
}
