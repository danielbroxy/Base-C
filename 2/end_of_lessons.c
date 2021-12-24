#include <stdio.h>

main()
{
    int n, time;
    scanf("%d", &n);
    time = n*45;
    time += (n-1)*5;
    time += (n-1)/2*10;
    printf("%d %d", 9 + time/60, time % 60);
    return 0;
}
