#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, x;
    float num[9], total, ave, sum;
    total = 0;
    i = 0;
    while (i < 10)
    {
        scanf("%f", &num[i]);
        if (num[i] < 0)
            break;
        total += num[i];
        i++;
    }
    ave = total / (i);
    printf("AVG=(%.f", num[0]);
    for (x = 1; x < i; x++)
    {
        printf("+%.f", num[x]);
    }
    printf(")/%d = %.1f", i, ave);
    
}