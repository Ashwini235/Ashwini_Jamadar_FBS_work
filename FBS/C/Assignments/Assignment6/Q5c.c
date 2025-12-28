#include<stdio.h>

void checkVote(int age);        //function declaration

void main()
{
	int age = 18;            //function call
	checkVote(age);
}

void checkVote(int age)        //function defination
{

	if(age >= 19)
	   printf("person is eligible for vote");
	else
	   printf("person is not eligible for vote");
}
