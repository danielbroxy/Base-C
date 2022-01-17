#include<stdio.h>
int main()
{
    int N, k;
    scanf("%d%d", &N, &k);
    printf("%d\n", N >> k & 1);
    return 0;
}
