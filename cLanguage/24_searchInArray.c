// Write a C program to Search an element in an array.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of Array : ");
    scanf("%d", &size);
    printf("Enter %d Element in Array \n", size);
    int array[size], element;

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d Element in Array : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter which element you find in Array : ");
    scanf("%d", &element);

    int found = 0;
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            found = 1;
            index = i;
            break;
        }
    }

    if (found == 1)
    {
        printf("Your Element %d is Present in Array at position %d\n", element, index + 1);
    }
    else
    {
        printf("Your Element %d is not Present in Array\n", element);
    }

    return 0;
}