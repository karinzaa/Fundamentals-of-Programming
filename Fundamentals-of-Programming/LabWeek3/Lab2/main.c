#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int a;
int main()
{
    int score[3], total = 0;
    bool cout1 = true, cout2 = true;
    for (a = 0; a < 3; a++)
    {
        printf("Input the score ");
        scanf(" %d", &score[a]);
        total += score[a];
        if (score[a] < 0)
            cout1 = false;
    }
    if (score[0] > 30)
    {
        printf("The score is maximum at 30\n");
        cout2 = false;
    }
    if (score[1] > 35)
    {
        printf("The score is maximum at 35\n");
        cout2 = false;
    }
    if (score[2] > 35)
    {
        printf("The score is maximum at 35\n");
        cout2 = false;
    }
    if (cout1 != false && cout2 != false)
    {
        if (total >= 90)
            printf("You have grade A.");
        else if (total < 90 && total >= 80)
            printf("You have grade B.");
        else if (total < 80 && total >= 70)
            printf("You have grade C.");
        else if (total < 70 && total >= 60)
            printf("You have grade D.");
        else
            printf("You have grade F.");
    }
    else if (cout1 == true)
        printf("The score is invalid.");
    return 0;
}