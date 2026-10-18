// Write a C program to find the largest and smallest element in Array.

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of Array : ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d Elements in Array:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d Element in Array : ", i + 1);
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    int smallest = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    printf("Smallest element in Array : %d\n", smallest);
    printf("Largest element in Array : %d\n", largest);

    return 0;
}