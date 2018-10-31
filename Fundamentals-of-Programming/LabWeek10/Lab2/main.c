#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float find_abs(int i)
{
    int a;
    a = abs(i);
    return a;
}
int main()
{
    int x, y;
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        y = find_abs(x);
        printf("The absolute value of %d is %d", x, y);
    }
    return 0;
}
