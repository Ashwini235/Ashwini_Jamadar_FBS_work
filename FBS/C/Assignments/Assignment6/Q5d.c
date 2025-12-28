#include<stdio.h>

int  checkVote(int age);             //function declaration

void main()
{
	int age = 18;
	int result; 
	result = checkVote(age);       //function call
	
	if(result == 1)
	   printf("person is eligible for vote");
	else
	   printf("person is not eligible for vote");
}

int  checkVote(int age)           //function defination
{
	if(age >= 19)
	   return 1;
	else
	   return 0;
}
