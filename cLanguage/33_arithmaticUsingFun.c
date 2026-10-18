#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    return (float)a / b;
}
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    printf("Quotient: %.2f\n", divide(num1, num2));
    return 0;
}