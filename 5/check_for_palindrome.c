#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[101];
    scanf("%s", s);
    for (int i = 0, j = strlen(s) - 1; i < j; ++i, --j)
        if (tolower(s[i]) != tolower(s[j]))
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
}
