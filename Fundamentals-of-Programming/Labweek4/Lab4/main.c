#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char x;
    a:
    printf("Enter number: ");
    scanf("%d", &num);
    if(num <= 4 && num > 0){
        x =  num == 1 ? 'a':num == 2 ? 'b':num == 3 ? 'c':num == 4 ? 'd': 0;
    printf("You have ordered: ");
        switch (x)
            {
         case 'a':{
             printf("Coke\n");
             break;
            }
        case 'b':{
            printf("Est Cola\n");
            break;
            }
        case 'c':{
            printf("Oishi green tea\n");
            break;
            }
        case 'd':{
            printf("Sprite\n");
            break;
            }
        }
    }
    else
        printf("Invalid drink number!\n");
        goto a;
    return 0;
}
