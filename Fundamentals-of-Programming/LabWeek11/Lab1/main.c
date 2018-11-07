#include <stdio.h>
#include <stdlib.h>

float convert1(float a)
{
    a = a / 32.86;
    return a;
}
float convert2(float b)
{
    b = b / 0.29;
    return b;
}
int main()
{
    int x = 5000;
    float y, z;
    {
        y = convert1(x);
        z = convert2(x);
        printf("%d THB = %f USD\n",x,y);
        printf("%d THB = %f JPY\n",x,z);
    }
    return 0;
}
