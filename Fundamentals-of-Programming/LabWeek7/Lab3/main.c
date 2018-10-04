#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], i, temp1;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    temp1 = num[0];
    num[0] = num[4];
    num[4] = temp1;

    temp1 = num[1];
    num[1] = num[2];
    num[2] = temp1;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
