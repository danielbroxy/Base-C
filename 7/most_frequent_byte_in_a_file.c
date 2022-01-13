#include<stdio.h>
int main()
{
    FILE * fin = fopen("input.dat", "rb");
    FILE * fout = fopen("output.txt", "w" );
    int count[256] = {};
    int c;
    int m ;
    while ((c = fgetc(fin)) != EOF)
        count[c]++;
    m = 0;
    for (int i = 1; i < 256; ++i)
        if (count[i] > count[m])
            m = i;
    fprintf(fout , "%d\n", m);
    fclose(fin);
    fclose(fout );
}
