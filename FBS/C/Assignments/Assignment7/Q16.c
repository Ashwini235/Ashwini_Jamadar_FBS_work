#include<stdio.h>

void printTable(int *n);   // function declaration

void main()
{
    int num = 5;

    printTable(&num);   // function call
}

void printTable(int *n)   // function definition
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        int table = (*n) * i;
        printf("%d\n", table);
    }
}