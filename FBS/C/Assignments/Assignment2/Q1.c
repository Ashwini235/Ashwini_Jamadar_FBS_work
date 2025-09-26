#include<stdio.h>
void main()
{
	int no1,no2,result;
	char operator;
	printf("enter first number");
	scanf("%d",&no1);
	
	printf("enter operator(+,-,*,/,%)");
	scanf("%c",&operator);
	
	printf("enter second number");
	scanf("%d",&no2);
	
	if(operat=='+')
	{
		result=no1+no2;
		printf(("result %d",result);
		
	}
	else if(operat=='-')
	{
		result=no1-no2;
    	printf("result %c",result);
	
	}
	else if(operat=='*')
	{
		result=no1*no2;
		printf("result %c",result);
	}
	else if(operat=='/')
	{
		result=no1/no2;
		printf("result %c",result);
				
	}
	else if(operat=='%')
	{
		result=no1%no2;
		printf("result %c",result);
	}

	
}