#include <stdio.h>
int main()
{
    int temp, rev = 0, rem, org;
    printf("Enter a number and check it is palindrome or not: ");
    scanf("%d", &temp);
    org = temp;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (org == rev)
    {

        printf("%d is a palindrome number.", org);
    }
    else
    {
        printf("%d is not a palindrome number.", org);
    }

    return 0;
}