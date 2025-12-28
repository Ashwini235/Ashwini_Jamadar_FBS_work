#include<stdio.h>

void calculateSum(int *n);   // function declaration

void main()
{
    int num = 5;

    calculateSum(&num);   // function call
}

void calculateSum(int *n)   // function definition
{
    int i, sum = 0;

    for(i = 1; i <= *n; i++)
    {
        sum += i;
    }

    printf("Sum is %d", sum);
}