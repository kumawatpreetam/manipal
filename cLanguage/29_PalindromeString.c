#include <stdio.h>
int main()
{
    char str[100];
    int length = 0, start, end, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0')
    {
        length++;
    }

    start = 0;
    end = length - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome == 1)
    {
        printf("String is a palindrome.\n");
    }
    else
    {
        printf("String is not a palindrome.\n");
    }

    return 0;
}