#include <stdio.h>

int main()
{
    char str[100];
    int visited[256] = {0};
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        unsigned char ch = (unsigned char)str[i];
        if (!visited[ch])
        {
            visited[ch] = 1;
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';

    printf("String after removing repeated characters: %s\n", str);
    return 0;
}