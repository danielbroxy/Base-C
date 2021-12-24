#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    int num;
    int sum = 0;
    scanf("%d", &n);
    while (i<n)
    {
        i ++;
        scanf("%d", &num);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
