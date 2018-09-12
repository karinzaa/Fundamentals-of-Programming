#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    a:
    printf("Enter number: ");
    scanf("%d", &num);
    if(num <= 4 && num > 0)
    switch (num)
    {
    case 1:
        printf("You have ordered: Coke\n");
        break;
    case 2:
        printf("You have ordered: Est Cola\n");
        break;
    case 3:
        printf("You have ordered: Oishi green tea\n");
        break;
    case 4:
        printf("You have ordered: Sprite\n");
        break;
    }
    else 
        printf("Invalid drink number!\n");
        goto a;
    return 0;
}
