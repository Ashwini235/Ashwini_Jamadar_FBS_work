#include<stdio.h>

void checkAge(int *age);   // function declaration

void main()
{
    int age = 30;

    checkAge(&age);   // function call
}

void checkAge(int *age)   // function definition
{
    if(*age < 12)
        printf("Child");
    else if(*age < 20)
        printf("Teenager");
    else if(*age < 60)
        printf("Adult");
    else
        printf("Senior");
}