#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char s;
    a:
    {
    //printf("\nSelect an operator either (+,-,*,/): ");
    printf("Select an operator either (+,-,*,/): ");
    scanf("%s", &s);
    }
    if(s!='+'&&s!='-'&&s!='*'&&s!='/')
    goto a;
    printf("Enter two numbers: ");
        scanf("%f %f", &a , &b);
            printf("%.2f %c %.2f = ", a , s , b);
            switch (s)
                {
            case '+':{
                printf("%.2f",a + b);
                break;
                }
            case '-':{
                printf("%.2f",a - b);
                break;
                }
            case '*':{
                printf("%.2f",a * b);
                break;
                }
            case '/':{
                printf("%.2f",a / b);
                break;
                }
            }
            //goto a;
        return 0;
}
