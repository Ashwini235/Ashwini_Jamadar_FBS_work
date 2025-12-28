#include <stdio.h>

int checkResult();   // function declaration

void main()
{
    int result;
    result = checkResult();   // function call

    if(result == 1)
        printf("Distinction");
    else if(result == 2)
        printf("First class");
    else if(result == 3)
        printf("Second class");
    else if(result == 4)
        printf("Pass class");
    else
        printf("Fail");
}

int checkResult()   // function definition
{
    int marks = 89;

    if(marks >= 75)
        return 1;
    else if(marks >= 65)
        return 2;
    else if(marks >= 55)
        return 3;
    else if(marks >= 40)
        return 4;
    else
        return 5;
}