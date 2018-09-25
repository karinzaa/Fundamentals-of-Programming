#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, c, t, j;
    printf("Input n: ");
    scanf("%d", &x);
    c = -1;
    if (x % 2 == 1)
    {
        for (i = x; i > 0; i = i - 2)
        {
            c++;
            for (j = x - c; j > i; j = j - 1)
            {
                printf(" ");
            }
            for (t = i; t > 0; t = t - 1)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for (i = x; i > 0; i = i - 2)
        {
            c++;
            for (j = x - c; j > i; j = j - 1)
            {
                printf(" ");
            }
            for (t = i; t > 0; t = t - 1)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}