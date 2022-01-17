#include<stdio.h>
int main()
{
    int N, k;
    scanf("%d%d", &N, &k);
    printf("%d\n", N | (1 << k));
    return 0;
}
