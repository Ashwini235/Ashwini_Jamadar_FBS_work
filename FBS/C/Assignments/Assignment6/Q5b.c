#include<stdio.h>

int  checkVote();             //function declaration

void main()
{
	int result; 
	result = checkVote();       //function call
	
	if(result == 1)
	   printf("person is eligible for vote");
	else
	   printf("person is not eligible for vote");
}

int  checkVote()           //function defination
{
	int age = 18;
	
	if(age >= 19)
	   return 1;
	else
	   return 0;
}
