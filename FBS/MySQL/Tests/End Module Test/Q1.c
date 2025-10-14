#include<stdio.h>

int main()
{
	int n, i, j;
	int fact, sum = 0;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for (i = 1; i<=n; i++)
	{
		fact = 1;
		for (j = 1; j<=i; j++)
		{
			fact = fact * j;
		}
		sum = sum + fact;
	}
	printf("\nsum of series 1! + 2! +...+%d! = %d\n",n, sum);
	
	
}
