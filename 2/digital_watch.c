#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hour, second;
    hour = n/60;
    second = n%60;
    printf("%d %d", hour, second);
    return(0);
}
