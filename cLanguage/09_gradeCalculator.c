/*Write a program to compute grade of students using if else adder. The grades are assigned as
followed:
Marks
Grade
90≤marks≤100  A+
80≤marks< 90  A
70≤marks< 80  B+
60≤marks< 70  B
50≤marks< 60  C+
40≤marks< 50  C
 30≤marks< 40 D
marks<30       F

*/

#include <stdio.h>

int main()
{
    int marks;
    char *grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        grade = "A+";
    }
    else if (marks >= 80)
    {
        grade = "A";
    }
    else if (marks >= 70)
    {
        grade = "B+";
    }
    else if (marks >= 60)
    {
        grade = "B";
    }
    else if (marks >= 50)
    {
        grade = "C+";
    }
    else if (marks >= 40)
    {
        grade = "C";
    }
    else if (marks >= 30)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }

    printf("Your Marks are %d and your Grade is %s", marks, grade);

    return 0;
}