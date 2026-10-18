#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i = 0, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Highest frequency character: '%c' (appears %d times)\n", maxChar, maxFreq);
    return 0;
}