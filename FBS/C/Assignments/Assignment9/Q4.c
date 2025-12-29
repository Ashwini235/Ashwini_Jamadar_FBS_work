#include<stdio.h>

void EvenOdd(int a[], int n);       //function declaration

void main()
{
    int a[10], n, i;
    printf("Enter number of elements:");         //function call
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    for(i=0;i<n;i++) 
	scanf("%d",&a[i]);
    EvenOdd(a,n);
}
void EvenOdd(int a[], int n)         //function defination
{
	int i;
	
	printf("Even numbers: \n");
	for(i=0; i<n; i++)
	{
		if(a[i]%2 == 0)
		   printf("%d", a[i]);
		   
	}
	
	printf("\n Odd numbers: \n");
	for(i=0; i<n; i++)
	{
		if(a[i] % 2 != 0)
		   printf("%d", a[i]);
		   
	}
	
	
	
	
}
