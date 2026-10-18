/*Write a C program to find the largest and smallest among three entered numbers and display
whether the identified largest/smallest number is even or odd.*/

#include <stdio.h>
int main()
{
    int num1, num2, num3, larger, smaller;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);

    // Greatest

    if (num1 >= num2 && num1 >= num3)
    {

        printf("%d is Larger than %d and %d \n", num1, num2, num3);
        larger = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("%d is Larger than %d and %d \n", num2, num1, num3);
        larger = num2;
    }
    else
    {
        printf("%d is Larger than %d and %d \n", num3, num1, num2);
        larger = num3;
    }

    // Smallest

    if (num1 <= num2 && num1 <= num3)
    {
        printf("%d is Smaller than %d and %d \n", num1, num2, num3);
        smaller = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        printf("%d is Smaller than %d and %d \n", num2, num1, num3);
        smaller = num2;
    }
    else
    {
        printf("%d is Smaller than %d and %d \n", num3, num1, num2);
        smaller = num3;
    }

    // smallerEvenOdd

    if (smaller % 2 == 0)
    {
        printf("Smallest number %d is Even \n", smaller);
    }
    else
    {
        printf("Smallest number %d is Odd \n", smaller);
    }

    // largerEvenOdd
    if (larger % 2 == 0)
    {
        printf("Largest number %d is Even \n", larger);
    }
    else
    {
        printf("Largest number %d is Odd \n", larger);
    }

    return 0;
}