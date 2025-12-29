#include<stdio.h>

void printPrime(int a[], int n);   // function declaration

void main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printPrime(a, n);   // function call
}

void printPrime(int a[], int n)   // function definition
{
    int i, j, count;

    printf("Prime numbers are:\n");

    for(i = 0; i < n; i++)
    {
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