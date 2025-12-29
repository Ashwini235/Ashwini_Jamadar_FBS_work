#include <stdio.h>

void mergeArrays(int a[], int b[], int c[], int n1, int n2);  // function declaration

void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int c[10];
    int n1 = 5, n2 = 5;

    mergeArrays(a, b, c, n1, n2);  // function call

    printf("Merged array:\n");
    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
}

void mergeArrays(int a[], int b[], int c[], int n1, int n2)  // function definition
{
    int i, j;
    
    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for(j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }
}