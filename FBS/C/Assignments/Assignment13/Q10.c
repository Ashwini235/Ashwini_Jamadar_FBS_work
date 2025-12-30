#include<stdio.h>
#include<stdlib.h>

void sortArray(int a[], int n);   // function declaration

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

    sortArray(a, n);   // function call

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);  
}

void sortArray(int a[], int n)   // function definition
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}