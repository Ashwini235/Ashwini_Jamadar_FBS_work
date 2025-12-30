#include<stdio.h>
#include<stdlib.h>

void printPrime(int a[], int n);   // function declaration

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

    printPrime(a, n);   // function call

    free(a);   
}

void printPrime(int a[], int n)   // function definition
{
    int i, j, count;

    printf("Prime numbers are:\n");

    for(i = 0; i < n; i++)
    {
        if(a[i] <= 1)
            continue;

        count = 0;

        for(j = 1; j <= a[i]; j++)
        {
            if(a[i] % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", a[i]);
    }
}