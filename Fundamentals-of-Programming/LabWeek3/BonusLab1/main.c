#include <stdio.h>
#include <stdlib.h>

float up(float x)
{
    float vat;
    if (x <= 100)
        return x;
    else if (x > 100 && x <= 300)
        return 100 + 0.75 * (x - 100);
    else if (x > 300 && x <= 600)
        return 250 + 0.50 * (x - 300);
    else
        return 400 + 0.25 * (x - 600);
}
int main(void)
{
    long id;
    char n[100];
    float u, c, t;
    printf("Input Customer ID : ");
    scanf("%i", &id);
    printf("Input the name of the customer : ");
    scanf("%s", n);
    printf("Input the unit(mins) consumed by the customer : ");
    scanf("%f", &u);
    t = up(u);
    if (t > 300)
    {
        c = t * 0.15;
        t += c;
    }
    printf("\nTelephone Bill\n");
    printf("Customer ID NO\t\t: %d\n", id);
    printf("Customer Name\t\t: %s", n);
    printf("\nUnit Consumed (Mins)\t: %.2f\n", u);
    printf("Surchage Amount (15)\t: %.2f\n", c);
    printf("Net Amount Paid\t\t: %.2f\n", t);
    return 0;
}