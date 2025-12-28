#include<stdio.h>

void checkCase(char *ch);   // function declaration

void main()
{
    char c = 'Z';
    checkCase(&c);          // function call 
}

void checkCase(char *ch)    // function definition
{
    if(*ch >= 'a' && *ch <= 'z')
    {
        printf("character is in Lowercase");
    }
    else
    {
        printf("character is in Uppercase");
    }
}