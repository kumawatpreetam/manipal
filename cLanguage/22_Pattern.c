#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Pattern 1: Increasing stars */
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    /* Pattern 2: Decreasing stars */
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    /* Pattern 3: Increasing numbers */
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    printf("\n");

    /* Pattern 4: Decreasing numbers */
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {

            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    /* Pattern 5: Repeated numbers */
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
