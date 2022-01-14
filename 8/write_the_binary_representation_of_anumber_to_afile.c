#include<stdio.h>
int main()
{
    int n;
    FILE * fout = fopen("output.dat", "wb");
    scanf("%d", &n);
    fwrite(&n, sizeof (int), 1, fout);
    fclose(fout);
}
