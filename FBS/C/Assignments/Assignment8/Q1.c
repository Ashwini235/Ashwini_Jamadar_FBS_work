#include<stdio.h>

void main()
{
	int a[5] = {12,6,35,2,39};
	int i;
	int min,max;
	
	min = max =a[0];
	
	for(i = 1; i < 5; i++)
	{
		if(a[i] < min)
		  min = a[i];
		if(a[i] > max)
		  max = a[i];
	}
	
	printf("Minimum number is %d\n",min);
	printf("Maximum number is %d\n",max);
	
}