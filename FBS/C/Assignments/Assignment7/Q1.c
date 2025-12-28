#include<stdio.h>

void checkEvenOdd(int *no);   // function declaration

void main()
{
    int n = 5;
    checkEvenOdd(&n);         // function call
}

void checkEvenOdd(int *no)   // function definition
{
    if(*no % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}