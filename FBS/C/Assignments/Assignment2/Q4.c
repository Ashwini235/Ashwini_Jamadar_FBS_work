#include<stdio.h>
void main()
{
	int marks=89;
	if(marks>=75)
	  printf("Distinction");
	else
	{
		if(marks>=65)
		  printf("First class");
		else
		{
			if(marks>=55)
		    	printf("Second class");
			else
			{
				if(marks>=40)
				 printf("Pass class");
				else
				{
					if(marks<=40)
					 printf("Fail");
				}
			}
		}
	}
}