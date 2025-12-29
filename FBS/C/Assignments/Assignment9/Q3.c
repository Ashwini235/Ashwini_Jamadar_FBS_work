#include<stdio.h>

void Sum(int a[], int n);                    //function declaration 

void main()
{
    int a[10], n, i;
    printf("Enter number of elements:");           //function call
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    Sum(a,n);
}

void Sum(int a[], int n)           //function defination
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum = sum + a[i];

    printf("Sum  of all numbers = %d", sum);
}
