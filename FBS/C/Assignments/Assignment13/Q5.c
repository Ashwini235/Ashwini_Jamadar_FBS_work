#include<stdio.h>
#include<stdlib.h>

void Alternate(int a[], int n);   // function declaration

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

    printf("Alternate elements are:\n");
    Alternate(a, n);

    free(a);
}

void Alternate(int a[], int n)    // function definition
{
    int i;
    for(i = 0; i < n; i += 2)
        printf("%d ", a[i]);
}