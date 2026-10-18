/*Write a C program to find whether a character is consonant or vowel using a switch statement.*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a Vowel.", ch);
        break;

    default:
        printf("%c is a Consonant.", ch);
    }

    return 0;
}