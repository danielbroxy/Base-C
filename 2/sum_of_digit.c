#include <stdio.h>

main()
{
    int number;
    scanf("%d", &number);
    printf("%d", number/100+((number%100)/10)+(number%100)%10);
    return 0;
}
