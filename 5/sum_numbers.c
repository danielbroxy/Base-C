#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[102];
    fgets(s, 102 , stdin);
    int sum = 0;
    for (int i = 0; s[i] != 0; ++i)
        if (isdigit(s[i]))
            sum += s[i] - '0';
    printf("%d\n", sum);
    return 0;
}

