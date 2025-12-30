#include<stdio.h>
#include<stdlib.h>

void Sum(int a[], int n);   // function declaration 

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

    Sum(a, n);   // function call

    free(a);  
}

void Sum(int a[], int n)   // function definition
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
        sum = sum + a[i];

    printf("Sum of all numbers = %d", sum);
}