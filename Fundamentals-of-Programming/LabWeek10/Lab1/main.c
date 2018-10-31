#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float check(int i, float j, double k)
{
    printf("\nThe integer is %d\nThe floating point number is %f\nThe double precision number is %lf", i, j, k);
    return 0;
}
int main()
{
    int x;
    float y;
    double z;
        {
            printf("Enter an integer: ");
            scanf("%d", &x);
            printf("Enter a floating point number:");
            scanf("%f", &y);
            printf("Enter a double precision number:");
            scanf("%lf", &z);
        }
    {
        check(x, y, z);
    }
    return 0;
}
