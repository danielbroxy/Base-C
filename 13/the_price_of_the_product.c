#include<stdio.h>
#include<math.h>
int main()
{
    double price;
    int rub, cop;
    scanf("%lf", &price);
    rub = price;
    cop = round (100 * (price - rub));
    printf("%d %d\n", rub, cop);
}
