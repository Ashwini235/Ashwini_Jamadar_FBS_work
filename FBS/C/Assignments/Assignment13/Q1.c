#include<stdio.h>
#include<stdlib.h>

void MinMax(int a[], int n);   // function declaration

void main()
{
    int *a, n, i;

    scanf("%d", &n);


    a = (int*)malloc(n * sizeof(int));

    if(a == NULL)
    {
        printf("Memory allocation failed");
        return;
    }

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    MinMax(a, n);   // function call

    free(a);  
}

void MinMax(int a[], int n)   // function definition
{
    int i, min, max;

    min = max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }

    printf("Min = %d\nMax = %d\n", min, max);
}