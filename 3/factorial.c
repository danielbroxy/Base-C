#include <stdio.h>

main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    int fact = 1;
    while (i != n)
        {
            i++;
            fact*=i;
        }
    printf("%d", fact);
    return 0;
}
