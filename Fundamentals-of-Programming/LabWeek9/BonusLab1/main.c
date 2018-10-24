#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;
    int a, b, c = 1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    if (row == col && row <= 5 && col <= 5 && row > 1)
    {
        for (a = 0; a < row; a++)
        {
            for (b = 0; b < col; b++)
            {
                printf("Enter element %d,%d: ", a, b);
                scanf("%d", &arr[row][col]);
            }
        }
        for (a = 0; a < row; a++)
        {
            for (b = 0; b < col; b++)
            {
                if (arr[row][col] != arr[row][col])
                    c = 0;
            }
        }
        if (c == 1)
            printf("The matrix is symmetric.");
        else
            printf("The matrix is not symmetric.");
    }
    else if (row > 5 || col > 5)
    {
        printf("The maximum number of row and column is 5.");
    }
    else
        printf("The matrix must be a square matrix.");
    return 0;
}
