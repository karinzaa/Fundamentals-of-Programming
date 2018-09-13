#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, x;
    for (t = 0; t <= 4; t = t + 0.5)
    {
        x = 60;
        x = x * t;
        printf("\nDistance for %.1f hours is %4.2f", t, x);
    }
    return 0;
}
