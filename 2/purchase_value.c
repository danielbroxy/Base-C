#include <stdio.h>

int main()
{
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    printf("%d %d", a*n+((b*n)/100), (b*n)%100);
    return 0;
}
