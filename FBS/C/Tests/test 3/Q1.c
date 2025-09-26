#include<stdio.h>
void main()
{
	int start = 10, end = 25;
	int size = end-start+1;
	int arr[100];
	int i;
	for(int i=0; i<size; i++)
	{
	arr[i]=start+i;
	}
	printf("even numbers between %d and %d are:\n",start,end);
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 == 0)
		{
			printf("%d\n",arr[i]);
		}
	}
	printf("\n\nodd numbers between %d and %d are:\n",start,end);
	for(i=0; i<size; i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d\n",arr[i]);
		}
	}
	printf("\n");
	
	
}
