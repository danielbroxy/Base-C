#include<stdio.h>
int main()
{
    int n;
    FILE * fin = fopen("input.dat", "rb");
    fread(&n, sizeof(int), 1, fin);
    printf("%d\n", n);
    fclose(fin);
}
