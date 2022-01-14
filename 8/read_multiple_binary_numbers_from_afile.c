#include<stdio.h>
int main()
{
    int n, sum = 0;
    FILE * fin = fopen("input.dat", "rb");
    while (fread(&n, sizeof(int), 1, fin) == 1)
    sum += n;
    printf("%d\n" , sum);
    fclose(fin);
}
