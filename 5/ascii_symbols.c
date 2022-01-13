#include <stdio.h>
int main()
{
    for (int i=33; i<127; ++i)
    {
        printf("%c %d\n", (char)i, i);
    }
    return 0;
}
