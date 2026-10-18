/*Write a C program to interchange values of two variables without using a third variable.*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:");
    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %d", num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n\nAfter swapping:");
    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %d", num2);

    return 0;
}