#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int limit, i = 0, fib;

    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d: ", limit);
    while (1)
    {
        fib = fibonacci(i);
        if (fib > limit)
        {
            break;
        }
        printf("%d ", fib);
        i++;
    }
    printf("\n");

    return 0;
}