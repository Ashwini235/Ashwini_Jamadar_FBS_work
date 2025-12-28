#include<stdio.h>

void checkLeapYear(int *year);   // function declaration

void main()
{
    int y = 2007;
    checkLeapYear(&y);           // function call
}

void checkLeapYear(int *year)    // function definition
{
    if((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0))
    {
        printf("%d is a leap year", *year);
    }
    else
    {
        printf("%d is not a leap year", *year);
    }
}