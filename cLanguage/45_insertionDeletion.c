#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow. Cannot insert %d.\n", value);
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Inserted %d into queue.\n", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow. Cannot delete element.\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Current Queue: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}