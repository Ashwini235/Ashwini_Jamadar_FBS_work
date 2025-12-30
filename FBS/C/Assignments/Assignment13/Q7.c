#include<stdio.h>
#include<stdlib.h>

void sumArrays(int a[], int b[], int c[], int n);   // function declaration

void main()
{
    int *a, *b, *c;
    int n = 5, i;

    
    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(n * sizeof(int));
    c = (int*)malloc(n * sizeof(int));

    if(a == NULL || b == NULL || c == NULL)
    {
        printf("Memory allocation failed");
        return;
    }
    a[0] = 1; a[1] = 2; a[2] = 3; a[3] = 4; a[4] = 5;

    
    b[0] = 10; b[1] = 20; b[2] = 30; b[3] = 40; b[4] = 50;

    sumArrays(a, b, c, n);   // function call

    printf("Sum of two arrays in third array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", c[i]);


    free(a);
    free(b);
    free(c);
}

void sumArrays(int a[], int b[], int c[], int n)   // function definition
{
    int i;
    for(i = 0; i < n; i++)
        c[i] = a[i] + b[i];
}