#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow. Cannot push %d.\n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Pushed %d onto stack.\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow. Cannot pop element.\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Current Stack: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    return 0;
}