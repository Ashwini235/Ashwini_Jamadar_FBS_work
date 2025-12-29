#include <stdio.h>

void main()
{
    int a[10], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of all numbers is %d", sum);
}