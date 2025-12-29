#include<stdio.h>

void sumArrays(int a[], int b[], int c[], int n);   // function declaration

void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int c[5];
    int n = 5;

    sumArrays(a, b, c, n);   // function call

    printf("Sum of two arrays in third array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
}

void sumArrays(int a[], int b[], int c[], int n)   // function definition
{
    for(int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
}