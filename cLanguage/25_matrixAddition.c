// Write a C program to perform the addition of all elements in 2D Array.

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter elements for first matrix [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter elements for second matrix [%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Sum of two matrices:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}