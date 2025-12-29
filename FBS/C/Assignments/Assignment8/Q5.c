#include <stdio.h>

void main()
{
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Alternate elements are:\n");
    
    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", a[i]);
    }
}