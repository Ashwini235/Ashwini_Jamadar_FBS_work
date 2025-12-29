#include<stdio.h>

void MinMax(int a[], int n);   //function declaration

void main()
{
    int a[10], n, i;
    scanf("%d",&n);                         //function call
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    MinMax(a,n);
}

void MinMax(int a[], int n)             //function defination
{
    int i, min, max;
    min = max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }

    printf("Min = %d\nMax = %d\n", min, max);
}