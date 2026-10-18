// Write a C program to perform the multiplication of two Matrices.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of matrix :");
    scanf("%d", &size);

    int arr1[size][size], arr2[size][size], sum[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter number for first matrix[%d][%d] :", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter number for Second matrix[%d][%d] :", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Multiply

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                sum[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}