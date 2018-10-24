#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[3][4];
    int row, col;
    int sum1[3], sum2[4];
    srand(time(NULL));
    for (row = 0; row < 4; row++)
    {
        sum1[row] = 0;
        sum2[row] = 0;
    }
    for (row = 0; row <= 2; row++)
    {
        for (col = 0; col <= 3; col++)
        {
            arr[row][col] = rand() % 10;
            sum1[row] += arr[row][col];
            printf("%d ", arr[row][col]);
            if (col == 3)
                printf("\n");
        }
    }
    for (col = 0; col < 4; col++)
    {
        for (row = 0; row < 3; row++)
            sum2[col] += arr[row][col];
    }
    printf("Sum of rows: %d %d %d ", sum1[0], sum1[1], sum1[2]);
    printf("\nSum of columns: %d %d %d %d ", sum2[0], sum2[1], sum2[2], sum2[3]);
    return 0;
}
