// Write a C program to calculate the area and perimeter of rectangle, square and circle.

#include <stdio.h>
int main()
{
    //  SQUARE
    int SqSide, areaSq, perSq;
    printf("Area and Perimeter of Square \n");
    printf("Enter side of Square : ");
    scanf("%d", &SqSide);
    areaSq = SqSide * SqSide;
    perSq = 4 * SqSide;
    printf("Total Area of square is %d * %d = %d \n", SqSide, SqSide, areaSq);
    printf("Total Perimeter  of square is 4 * %d = %d \n", SqSide, perSq);

    // RECTANGLE

    int length, bradth, areaRec, perRec;
    printf("Area and Perimeter of Rectangle \n");
    printf("Enter Length of Rectangle : ");
    scanf("%d", &length);
    printf("Enter Breadth of Rectangle : ");
    scanf("%d", &bradth);
    areaRec = length * bradth;
    perRec = 2 * (length + bradth);
    printf("Total Area of Rectangle is %d * %d = %d \n", length, bradth, areaRec);
    printf("Total Perimeter  of Rectangle is 2 * ( %d + %d ) = %d \n", length, bradth, perRec);

    // CIRCLE

    int cirRadius;
    float perCir, areaCir, PI = 3.14;
    printf("Area and Perimeter of Circle \n");
    printf("Enter radius of Circle : ");
    scanf("%d", &cirRadius);
    areaCir = PI * (float)cirRadius * (float)cirRadius;
    perCir = 2 * PI * cirRadius;

    printf("Total Area of Circle is %f * (%d * %d )= %f \n", PI, cirRadius, cirRadius, areaCir);
    printf("TotalPerimeter of Circle is 2 * (%f * %d) = %f \n", PI, cirRadius, perCir);

    return 0;
}