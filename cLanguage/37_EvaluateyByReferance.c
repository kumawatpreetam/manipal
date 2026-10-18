#include <stdio.h>

long long power(int x, int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    int x, n;

    printf("Enter x and n number: ");
    scanf("%d %d", &x, &n);

    long long y = power(x, n);
    printf("Result: %d^%d = %lld\n", x, n, y);

    return 0;
}