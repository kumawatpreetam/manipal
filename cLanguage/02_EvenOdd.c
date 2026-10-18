// Write a C program to check whether the given number is odd or even.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Your number % d is Even \n", num);
    }
    else
    {
        printf("Your number % d is Odd \n", num);
    }
    return 0;
}
