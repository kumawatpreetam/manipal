/*Write a C program to compute the final grade of student’s five subject marks. Take entry of 5
subject marks from user out of 100.*/

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char *grade;

    printf("Enter marks of Subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &m3);

    printf("Enter marks of Subject 4: ");
    scanf("%d", &m4);

    printf("Enter marks of Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    percentage = total / 5.0;

    if (percentage >= 90)
    {
        grade = "A+";
    }
    else if (percentage >= 80)
    {
        grade = "A";
    }
    else if (percentage >= 70)
    {
        grade = "B+";
    }
    else if (percentage >= 60)
    {
        grade = "B";
    }
    else if (percentage >= 50)
    {
        grade = "C+";
    }
    else if (percentage >= 40)
    {
        grade = "C";
    }
    else if (percentage >= 30)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }

    printf("\nTotal Marks = %d/500", total);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nFinal Grade = %s", grade);

    return 0;
}