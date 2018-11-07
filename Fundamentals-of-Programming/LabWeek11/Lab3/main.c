#include <stdio.h>

#define N 4

int gcd(int num1, int num2)
{
    int result;
    int a, b;
    if (num1 > num2)
    {
        while (a > 0)
        {
            a = num1 % num2;
            b = num1 / num2;
            num1 = num2;
            num2 = a;
        }
        result = num1;
    }
    else
    {
        while (a > 0)
        {
            a = num2 % num1;
            b = num2 / num1;
            num2 = num1;
            num1 = a;
        }
        result = num2;
    }
    return result;
}

int main()
{
    int num[N];
    int result;

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    result = gcd(num[0], num[1]);
    for (int i = 2; i < N; i++)
    {
        result = gcd(result, num[i]);
    }

    printf("GCD of ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
    printf("is %d\n", result);

    return 0;
}