#include<stdio.h>
int main()
{
    FILE * fin = fopen("input.dat", "rb");
    FILE * fout = fopen("output.dat", "wb");
    fseek(fin, 0, SEEK_END);
    int pos = ftell(fin);
    while (pos > 0)
    {
        pos--;
        fseek(fin, pos, SEEK_SET);
        int c = fgetc(fin);
        fputc(c, fout);
    }
    fclose(fin);
    fclose(fout );
}
