#include<stdio.h>

void checkVowel(char *ch);   // function declaration

void main()
{
    char temp = 'z';
    checkVowel(&temp);       // function call
}

void checkVowel(char *ch)    // function definition
{
    if(*ch=='a' || *ch=='e' || *ch=='i' || *ch=='o' || *ch=='u' ||
       *ch=='A' || *ch=='E' || *ch=='I' || *ch=='O' || *ch=='U')
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonant");
    }
}