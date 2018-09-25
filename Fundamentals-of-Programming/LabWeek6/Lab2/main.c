#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, c, t, j;
    printf("Input n: ");
    scanf("%d", &x);
    c = 0;
    if (x % 2 == 1)
    {
        for (i = 1; i <= x - c; i++)
        {
            t = ((x - 1) / 2) + 1;
            for (t; t <= (x - i); t++)
            {
                printf(" ");
            }
            for (j = 1; j < i * 2; j++)
            {
                printf("*");
            }
            c++;
            printf("\n");
        }
    }
    else
    {
        for (i = 1; i <= x - c; i++)
        {
            t = ((x - 1) / 2) + 2;
            for (t; t <= (x - i); t++)
            {
                printf(" ");
            }
            for (j = 1; j < i * 2 + 1; j++)
            {
                printf("*");
            }
            c++;
            printf("\n");
        }
    }
    return 0;
}