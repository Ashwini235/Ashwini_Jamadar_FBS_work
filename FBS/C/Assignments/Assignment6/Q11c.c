#include <stdio.h>

void checkResult(int marks);   // declaration

void main()
{
    int marks = 89;
    checkResult(marks);   // function call
}

void checkResult(int marks)   // function definition
{
    if(marks >= 75)
        printf("Distinction");
    else if(marks >= 65)
        printf("First class");
    else if(marks >= 55)
        printf("Second class");
    else if(marks >= 40)
        printf("Pass class");
    else
        printf("Fail");
}