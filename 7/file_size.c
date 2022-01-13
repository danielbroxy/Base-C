#include<stdio.h>
int main()
{
    FILE * fin = fopen("input.dat", "rb");
    FILE * fout = fopen("output.txt", "w" );
    fseek(fin, 0, SEEK_END);
    fprintf(fout, "%d\n", (int )ftell(fin));
    fclose(fin);
    fclose(fout );
}
