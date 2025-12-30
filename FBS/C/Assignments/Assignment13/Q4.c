#include<stdio.h>
#include<stdlib.h>

void EvenOdd(int a[], int n);   // function declaration

void main()
{
    int *a, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    a = (int*)malloc(n * sizeof(int));

    if(a == NULL)
    {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    EvenOdd(a, n);   // function call

    free(a);   
}

void EvenOdd(int a[], int n)   // function definition
{
    int i;

    printf("Even numbers:\n");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers:\n");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
            printf("%d ", a[i]);
    }
}