 #include<stdio.h>

void main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);   

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Character '%c' found in the string.", ch);
    else
        printf("Character '%c' not found in the string.", ch);
}
