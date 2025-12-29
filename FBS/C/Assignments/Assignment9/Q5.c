#include<stdio.h>

void Alternate(int a[], int n)     //function declaration
{
    int i;
    for(i = 0; i < n; i += 2)
        printf("%d ", a[i]);
}

void main()                       //function call
{
    int a[10], n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 
	 printf("Alternate elements are:");
    Alternate(a,n);
    
    
void printAlternate(int a[], int n)                //function defination
{
	int i;
	 printf("Alternate elements are:\n");
	 
	 for(i=0; i<n; i=i+2)
	 {
	 	printf("%d",a[i]);
	 }
}
}