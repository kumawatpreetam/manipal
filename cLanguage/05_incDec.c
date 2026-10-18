/*Write a C program to illustrate the use of unary prefix and postfix increment and decrement
operators*/

#include <stdio.h>

int main()
{
    int num, preinc, postinc, predec, postdec;

    printf("Enter a number :");
    scanf("%d", &num);

    preinc = ++num;
    postinc = num++;
    predec = --num;
    postdec = num--;

    printf("Value of Preincrement is : %d \n", preinc);
    printf("Value of Postincrement is : %d \n", postinc);
    printf("Value of Predecrement is : %d \n", predec);
    printf("Value of Postdecrement is : %d \n", postdec);

    return 0;
}