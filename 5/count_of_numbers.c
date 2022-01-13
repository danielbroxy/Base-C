#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int count[26] = {};
    int i;
    for (i = 0; s[i] != 0; ++i)
    {
        ++count[s[i] - 'a'];
    }
    for (i = 0; i < 26; i++)
        printf("%d ", count[ i]);
    printf("\n");
    return 0;
}
