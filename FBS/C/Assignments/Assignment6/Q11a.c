#include <stdio.h>

void checkResult();   // function declaration

void main()
{
    checkResult();   // function call
}

void checkResult()   // function definition
{
    int marks = 89;

    if(marks >= 75)
        printf("Distinction");
    else
    {
        if(marks >= 65)
            printf("First class");
        else
        {
            if(marks >= 55)
                printf("Second class");
            else
            {
                if(marks >= 40)
                    printf("Pass class");
                else
                    printf("Fail");
            }
        }
    }
}