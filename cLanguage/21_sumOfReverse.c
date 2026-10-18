#include <stdio.h>
int main()
{
    int num, rem, sum = 0, rev = 0;

    printf("Enter a number and find what is the sum of digit and reverse number :");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        sum += rem;

        num /= 10;
    }

    printf("Reverse number is : %d\n", rev);
    printf("Sum of digits of the number is %d", sum);

    return 0;
}
