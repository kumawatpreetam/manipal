// #include <stdio.h>

// void printEven(int start, int end)
// {
//     if (start > end)
//     {
//         return;
//     }
//     if (start % 2 == 0)
//     {
//         printf("%d ", start);
//     }
//     printEven(start + 1, end);
// }

// void printOdd(int start, int end)
// {
//     if (start > end)
//     {
//         return;
//     }
//     if (start % 2 != 0)
//     {
//         printf("%d ", start);
//     }
//     printOdd(start + 1, end);
// }

// int main()
// {
//     int start, end;

//     printf("Enter lower and upper limits of the interval: ");
//     scanf("%d %d", &start, &end);

//     printf("Even numbers ");
//     printEven(start, end);
//     printf("\n");

//     printf("Odd numbers :", start, end);
//     printOdd(start, end);
//     return 0;
// }

#include <stdio.h>

void printEven(int start, int end)
{
    if (start > end)
    {
        return;
    }
    if (start % 2 == 0)
    {
        printf("%d ", start);
    }
    printEven(start + 1, end);
}

void printOdd(int start, int end)
{
    if (start > end)
    {
        return;
    }
    if (start % 2 != 0)
    {
        printf("%d ", start);
    }
    printOdd(start + 1, end);
}

int main()
{
    int start, end;

    printf("Enter lower and upper limits of the interval: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers ");
    printEven(start, end);
    printf("\n");

    printf("Odd numbers :");
    printOdd(start, end);
    return 0;
}