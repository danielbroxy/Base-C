#include<stdio.h>
int main()
{
    int a;
    FILE * fin = fopen("input.txt", "r");
    FILE * fout = fopen("output.txt", "w");
    int pos;
    char c;
    fscanf( fin, "%d", &pos);
    fseek(fin, pos, SEEK_SET );
    c = fgetc(fin);
    fprintf(fout, "%c\n", c);
    fclose(fin);
    fclose(fout);
}
