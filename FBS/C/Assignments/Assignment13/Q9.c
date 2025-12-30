#include<stdio.h>
#include<stdlib.h>

void reverseArray(int a[], int n);   // function declaration

void main()
{
    int *a, n, i;

    printf("Enter number of elements : ");
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

    reverseArray(a, n);   // function call

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);   
}

void reverseArray(int a[], int n)   // function definition
{
    int i, temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}