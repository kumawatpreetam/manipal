/*Write a C program to perform all the bitwise operations by taking inputs.*/

#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    int And = num1 & num2;
    int Or = num1 | num2;
    int Not = ~num1;
    int Xor = num1 ^ num2;
    int LeftShift = num1 << 2;
    int RightShift = num1 >> 2;

    printf("Output of AND operation %d & %d is : %d \n", num1, num2, And);
    printf("Output of OR operation %d | %d is : %d \n", num1, num2, Or);
    printf("Output of NOT operation    ~ %d is : %d \n", num1, Not);
    printf("Output of XOR operation %d ^ %d is : %d \n", num1, num2, Xor);
    printf("Output of LEFTSHIFT operation %d <<2 is : %d \n", num1, LeftShift);
    printf("Output of RIGHTSHIFT operation %d >>2 is : %d \n", num1, RightShift);

    return 0;
}