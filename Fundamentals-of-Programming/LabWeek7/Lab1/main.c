#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, num[4], i;
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &num[i]);
    }
        sum = num[0] + num[2] + num[4];
    printf("SUM = %d", sum);
}