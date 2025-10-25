#include<stdio.h>
void main()
{
	int n=5;
	int fact=1;
	int i=1;
	
	while(i<=n)
	{
		fact = fact*i;
		i++;
	}
	printf("factorial of %d is %d",n,fact);
}
