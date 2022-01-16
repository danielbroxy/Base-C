#include<stdio.h>
void move(int n, int a, int b)
{
    if (n > 0)
    {
        int c = 6 - a - b;
        if (b == a % 3 + 1)
        {
            move(n - 1, a, c);
            printf("%d %d %d \n", n, a, b);
            move(n - 1, c, b);
        }
        else
        {
            move(n - 1, a, b);
            printf("%d %d %d \n", n, a, c);
            move(n - 1, b, a);
            printf("%d %d %d \n", n, c, b);
            move(n - 1, a, b);
        }
    }
}

int main()
{
    int n;
    scanf ("%d", &n);
    move(n, 1, 3);
    return 0;
}
