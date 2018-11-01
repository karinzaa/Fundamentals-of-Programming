#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int rand_number, gue, y;
    {
        srand(time(NULL));
        rand_number = 1 + rand() % 100;
        for (gue = 7; gue >= 0; gue--)
        {
            //printf("%d",rand_number);
            printf("\nEnter your guess: ");
            scanf("%d", &y);
            if (y == rand_number)
            {
                printf("Hooray, you have won!");
                break;
            }
            else if (gue > rand_number)
            {
                printf("Wrong number :( Your guess was too high.\nYou have %d guesses left. Try again.\n", gue);
            }
            else
                printf("Wrong number :( Your guess was too low.\nYou have %d guesses left. Try again.\n", gue);
            if(gue == 0)
            {
            printf("\nSorry you lose\n");
            printf("The correct number is : %d",rand_number);
            }    
        }
        return 0;
    }
}