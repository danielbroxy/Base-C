#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d;
    scanf ("%d", &d);
    unsigned char * p = (char *)&d;
    for (int i = 0; i < 4; ++i)
    {
        printf("%hhu ", (unsigned char)*p);
        p++;
    }
    printf("\n");
    return 0;
}
