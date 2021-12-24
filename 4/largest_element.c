#include <stdio.h>

main()
{
    int n;
    int max = 0;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i<n; ++i)
    {
        scanf("%d", &a[i]);
        if (a[i]>max)
            max=a[i];
    }
    printf("%d", max);
    return 0;
}
