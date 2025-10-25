#include<stdio.h>
void main()
{
	int no =7;
	int i=2, flag=0;
	while(i<=no/2)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
}