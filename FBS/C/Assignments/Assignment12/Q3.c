#include<stdio.h>

void main()
{
    char str[100];
    int n, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter index to remove: ");
    scanf("%d", &n);

    for(i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("String after removal: %s", str);
}