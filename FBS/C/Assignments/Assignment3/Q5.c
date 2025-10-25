#include<stdio.h>
void main()
{
	int no =153;
	int rem,sum=0;
	int n=no;
	
	while(n>0)
	{
		rem =n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	
	}
	if(sum==no)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
}