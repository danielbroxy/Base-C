#include<stdio.h>
int main()
{
    int a;
    FILE * fin = fopen("input.txt", "r");
    FILE * fout = fopen("output.txt", " w");
    int n, sum = 0;
    while (fscanf(fin , "%d", &n) == 1)
        sum += n;
    fprintf(fout, " %d\n", sum);
    fclose(fin);
    fclose(fout );
}
