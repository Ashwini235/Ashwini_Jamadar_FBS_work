 #include<stdio.h>

int main()
{
    char str[200];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);   

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            count++;
    }


    count++;

    printf("Number of words = %d", count);

    return 0;
}