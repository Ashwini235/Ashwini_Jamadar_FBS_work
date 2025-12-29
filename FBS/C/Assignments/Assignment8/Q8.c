#include <stdio.h>

void main()
{
    int arr[5] = {1,2,3,4,5};
    int brr[5] = {10,20,30,40,50};
    int crr[10];
    int i, j = 0;

    for(i = 0; i < 5; i++)
    {
        crr[j] = arr[i];
        j++;
    }

    for(i = 0; i < 5; i++)
    {
        crr[j] = brr[i];
        j++;
    }

    printf("Merged array is:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }
}