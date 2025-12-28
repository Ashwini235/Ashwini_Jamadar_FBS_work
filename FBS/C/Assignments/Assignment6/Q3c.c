#include<stdio.h>

void checkLeapYear(int year);    //function declaration

void main()
{
	int year = 2007;
	checkLeapYear(year);             //function call
}

void checkLeapYear(int year)              //function defination
{
	
	if(year % 4==0 && year % 100!=0 || year % 400==0)
		printf("%d is a leap year",year);
	else
		printf("%d is not a leap year",year);
	
}