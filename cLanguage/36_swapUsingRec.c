#include <stdio.h>
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("\n--- Call by Value ---\n");
    printf("Before call: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After call: x = %d, y = %d\n", x, y);
    printf("\n--- Call by Reference ---\n");
    printf("Before call: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After call: x = %d, y = %d\n", x, y);
    return 0;
}