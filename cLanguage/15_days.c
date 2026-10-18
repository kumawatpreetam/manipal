/*Write a C program to print the number of days in a given month and year using a switch case.*/

#include <stdio.h>

int main()
{
    int month, year, days;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
        days = 31;
        break;

    case 2:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;

    case 3:
        days = 31;
        break;

    case 4:
        days = 30;
        break;

    case 5:
        days = 31;
        break;

    case 6:
        days = 30;
        break;

    case 7:
        days = 31;
        break;

    case 8:
        days = 31;
        break;

    case 9:
        days = 30;
        break;

    case 10:
        days = 31;
        break;

    case 11:
        days = 30;
        break;

    case 12:
        days = 31;
        break;

    default:
        printf("Invalid month!");
        return 0;
    }

    printf("Number of days = %d", days);

    return 0;
}