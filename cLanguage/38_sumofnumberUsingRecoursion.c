#include <stdio.h>

int sumRecursive(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n + sumRecursive(n - 1);
}

int main()
{
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    printf("Sum of number is : %d\n", sumRecursive(n));

    return 0;
}