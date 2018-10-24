#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[3][4];
    int row, col;
    int rand_number;
    srand(time(NULL));
    for (row = 0; row <= 2; row++)
    {
        for (col = 0; col <= 3; col++)
        {
            rand_number = rand() % 10;

            arr[row][col] = rand_number;
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}
