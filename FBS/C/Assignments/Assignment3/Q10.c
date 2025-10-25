#include<stdio.h>
void main()
{
	int num=12345;
	int n= num;
	int last, first;
	last = n%10;
	while(n>10)
	{
		n=n/10;
	}
	first = n;
	int sum = first+last;
	
	printf(" sum of first and last two digits is %d",n,sum);
}