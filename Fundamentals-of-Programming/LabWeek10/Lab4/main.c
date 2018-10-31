#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float euc_dist(float x1, float y1, float x2, float y2)
{
    double a;
    a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return a;
}
int main()
{
    float i1, i2, j1, j2, an;
    {
        printf("Please	enter a value for x1: ");
        scanf("%f", &i1);
        printf("Please	enter a value for y1: ");
        scanf("%f", &j1);
        printf("Please	enter a value for x2: ");
        scanf("%f", &i2);
        printf("Please	enter a value for y2: ");
        scanf("%f", &j2);
    }
    an = euc_dist(i1, j1, i2, j2);
    printf("The distance between the points is: %f", an);
    return 0;
}
