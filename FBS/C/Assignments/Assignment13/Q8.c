#include<stdio.h>
#include<stdlib.h>

void mergeArrays(int a[], int b[], int c[], int n1, int n2);  // function declaration

void main()
{
    int *a, *b, *c;
    int n1 = 5, n2 = 5, i;


    a = (int*)malloc(n1 * sizeof(int));
    b = (int*)malloc(n2 * sizeof(int));
    c = (int*)malloc((n1 + n2) * sizeof(int));

    if(a == NULL || b == NULL || c == NULL)
    {
        printf("Memory allocation failed");
        return;
    }

    
    a[0] = 1; a[1] = 2; a[2] = 3; a[3] = 4; a[4] = 5;
    b[0] = 10; b[1] = 20; b[2] = 30; b[3] = 40; b[4] = 50;

    mergeArrays(a, b, c, n1, n2);  // function call

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);


    free(a);
    free(b);
    free(c);
}

void mergeArrays(int a[], int b[], int c[], int n1, int n2)  // function definition
{
    int i, j;

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }
}