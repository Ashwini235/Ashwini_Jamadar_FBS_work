#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;
    char newstr[100];

    printf("Enter a string: ");
    gets(str);   


    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            newstr[j] = str[i];
            j++;
        }
    }
    newstr[j] = '\0';

    printf("String after removing odd index characters: %s", newstr);

    return 0;
}