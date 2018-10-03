#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[5];
    //int i, n, a[4];
    n = 5;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}