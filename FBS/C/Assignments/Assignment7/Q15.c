#include<stdio.h>

void printNumbers(int *limit);   // function declaration

void main()
{
    int n = 9;

    printNumbers(&n);   // function call
}

void printNumbers(int *limit)   // function definition
{
    int i;
    for(i = 1; i <= *limit; i++)
    {
        printf("%d\n", i);
    }
}