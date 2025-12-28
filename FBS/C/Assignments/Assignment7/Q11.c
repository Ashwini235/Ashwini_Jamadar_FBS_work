#include<stdio.h>

void checkResult(int *m);   // function declaration

void main()
{
    int marks = 89;

    checkResult(&marks);   // function call
}

void checkResult(int *m)   // function definition
{
    if(*m >= 75)
        printf("Distinction");
    else
    {
        if(*m >= 65)
            printf("First class");
        else
        {
            if(*m >= 55)
                printf("Second class");
            else
            {
                if(*m >= 40)
                    printf("Pass class");
                else
                    printf("Fail");
            }
        }
    }
}