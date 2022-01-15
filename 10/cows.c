#include <stdio.h>
int main()
{
    int n;
    scanf ("%d", &n);
    if (n % 10 >= 2 && n % 10 <= 4 && n / 10 != 1)
        printf("%d korovy\n", n);
    else if (n % 10 == 1 && n != 11)
        printf("%d korova\n", n);
    else
        printf("%d korov\n", n);
    return 0;
}
