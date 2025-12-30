#include<stdio.h>
#include<stdlib.h>

void Search(int a[], int n);   // function declaration

void main()
{
    int *a, n, i;

    printf("Enter size: ");
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

    Search(a, n);   // function call

    free(a);   
}

void Search(int a[], int n)   // function definition
{
    int i, num, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");
}