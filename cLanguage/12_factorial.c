/*Write a C program to find the factorial of a number.*/
#include <stdio.h>

int main()
{
    int num, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %d", num, fact);

    return 0;
}