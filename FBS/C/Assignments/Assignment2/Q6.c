#include<stdio.h>
void main()
{
	int no=7;
	if(no%3==0&&no%5==0)
	printf("both number are divisible");
	else
	{
		if(no%3==0&&no%5!=0)
     	printf("divisible by 3 but not divisible by 5");
	}
    	else
     	{
		    if(no%3!=0&&no%5==0)
		    printf("divisible by 5 but not divisible by 3");
     	}
}