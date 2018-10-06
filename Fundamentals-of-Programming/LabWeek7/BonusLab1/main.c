#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[4], b[4];
    n = 5;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        b[i] = a[4 - i];
        printf("%d ", b[i]);
    }
}