/*Write a C program to perform all the arithmetic operations by taking inputs from command line.*/

#include <stdio.h>
int main()
{

    int num1, num2;

    printf("Enter first number :");
    scanf("%d", &num1);

    printf("Enter second number :");
    scanf("%d", &num2);

    int add = num1 + num2;
    int sub = num1 - num2;
    int mup = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;

    printf("Sum of %d + %d is : %d \n", num1, num2, add);
    printf("Subtraction of %d - %d is : %d \n", num1, num2, sub);
    printf("Multiplication of %d * %d is : %d \n", num1, num2, mup);
    printf("Division of %d / %d is : %d \n", num1, num2, div);
    printf("Modulus of %d %% %d is : %d \n", num1, num2, mod);

    return 0;
}
