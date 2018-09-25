#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, n;
    printf("Enter a number of row: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (x = i; x >= 1; x--)
        {
            printf("%d", x);
        }
        printf("\n");
    }
    return 0;
}