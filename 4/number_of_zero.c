#include <stdio.h>

main()
{
    int N, count, num;
    scanf("%d", &N);
    for (int i=0; i<N; ++i)
    {
        scanf("%d", &num);
        if (num==0)
            ++count;
    }
    printf("%d", count);
    return 0;
}
