#include<stdio.h>
void main()
{
	int n=100;
	int i=1, j, sum;
	printf("perfect numbers between 1 and %d are:",n);
	
	while(i<=n)
	{
		sum = 0;
		j = 1;
		
		while(j<i)
		{
			if(i%j ==0)
			sum += j;
			j++;
		}
		if(sum==i)
	     	printf("%d",i);
	    i++;
	}
}