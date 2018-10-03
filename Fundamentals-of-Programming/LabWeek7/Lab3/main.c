#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], i;
    //int num[4], i;
    for (i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
        {
            i = 4;
            scanf("%d", &num[i]);
            i = 0;
            break;
        }
        case 1:
        {
            i = 2;
            scanf("%d", &num[i]);
            i = 1;
            break;
        }
        case 2:
        {
            i = 1;
            scanf("%d", &num[i]);
            i = 2;
            break;
        }
        case 4:
        {
            i = 0;
            scanf("%d", &num[i]);
            i = 4;
            break;
        }
        default:
        {
            scanf("%d", &num[i]);
            break;
        }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}
