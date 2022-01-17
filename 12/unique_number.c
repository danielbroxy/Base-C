#include<stdio.h>
int main()
{
    int d, s = 0;
    while (scanf ("%d", &d) == 1)
    s ^= d;
    printf("%d\n", s);
}
