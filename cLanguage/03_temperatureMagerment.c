/* Write a C program to convert temperature given in Fahrenheit to Centigrade and Centigrade to Fahrenheit. Hint: C=5/9(F-32)) */

#include <stdio.h>
int main()
{
    int cent, fah, temp;
    printf("Enter your place temperature:");
    scanf("%d", &temp);

    fah = (temp * 9 / 5) + 32;
    cent = (temp - 32) * 5 / 9;

    printf("Temperature of your place is %d Celsius and %d Fahrenheit", cent, fah);

    return 0;
}
