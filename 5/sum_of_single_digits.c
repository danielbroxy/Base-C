#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[20002];
    fgets(s, 20002 , stdin);
    int sum = s[0] - '0';
    int len = strlen(s);
    for (int i = 1; i < len; i += 2)
        if (s[i] == '+')
            sum += s[i + 1] - '0';
        else if (s[i] == '-')
            sum -= s[i + 1] - '0';
    printf("%d\n", sum);
    return 0;
}
