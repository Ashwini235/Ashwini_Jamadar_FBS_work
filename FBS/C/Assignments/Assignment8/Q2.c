#include <stdio.h>

void main()
{
    int a[10], i, n, num, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            found = 1;
            printf("Number found at position %d", i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found in array");
    }
}