#include<stdio.h>

void calculateFactorial(int *n);   // function declaration

void main()
{
    int num = 5;

    calculateFactorial(&num);   // function call
}

void calculateFactorial(int *n)   // function definition
{
    int i = 1, fact = 1;

    while(i <= *n)
    {
        fact *= i;
        i++;
    }

    printf("Factorial of %d is %d", *n, fact);
}