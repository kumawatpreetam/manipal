#include <stdio.h>

int main()
{
    int num, i;
    double sum = 0.0;

    // Prompt user for the number of terms
    printf("Enter number of terms: ");
    scanf("%d", &num);

    // Display the series and calculate the sum
    printf("The series is: ");
    for (i = 1; i <= num; i++)
    {
        // Accumulate sum using type casting to avoid integer division
        sum += 1.0 / i;

        // Print the terms formatted nicely
        if (i == 1)
        {
            printf("1");
        }
        else
        {
            printf(" + 1/%d", i);
        }
    }

    // Print the calculated sum
    printf("\nSum of the series = %.4lf\n", sum);

    return 0;
}
