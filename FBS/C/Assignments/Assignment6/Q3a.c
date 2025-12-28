#include<stdio.h>

void checkLeapYear();    //function declaration

void main()
{
	checkLeapYear();             //function call
}

void checkLeapYear()              //function defination
{
	int year = 2007;
	
	if(year % 4==0 && year % 100!=0 || year % 400==0)
		printf("%d is a leap year",year);
	else
		printf("%d is not a leap year",year);
	
}