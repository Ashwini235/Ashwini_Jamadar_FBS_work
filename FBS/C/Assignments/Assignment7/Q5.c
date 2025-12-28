#include<stdio.h>

void checkVote(int *age);   // function declaration

void main()
{
    int a = 18;
    checkVote(&a);          // function call 
}

void checkVote(int *age)    // function definition
{
    if(*age >= 18)
    {
        printf("person is eligible for vote");
    }
    else
    {
        printf("person is not eligible for vote");
    }
}