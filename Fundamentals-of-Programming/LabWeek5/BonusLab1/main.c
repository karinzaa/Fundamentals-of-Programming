#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    printf("Please Enter numbers: ");
    while (scanf("%d", &x) != EOF)
    {
        if (x >= 1 && x <= 30)
        {
            printf("%d|", x);
            for (i = 0; i < x; i++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }
        else
            printf("Err\n");
        break;
    }
    return 0;
}
