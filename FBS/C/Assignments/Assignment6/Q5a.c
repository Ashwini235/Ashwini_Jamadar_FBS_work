#include<stdio.h>

void checkVote();

void main()
{
	checkVote();
}

void checkVote()
{
	int age = 18;
	
	if(age >= 19)
	   printf("person is eligible for vote");
	else
	   printf("person is not eligible for vote");
}
