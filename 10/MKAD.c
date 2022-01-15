#include <stdio.h>
int main()
{
    int v, t, res;
    scanf("%d%d", &v, &t);
    res = (v * t % 109 + 109 ) % 109;
    printf("%d\n", res);
}
