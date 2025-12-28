#include<stdio.h>

int checkLeapYear(int year);    //function declaration

void main()
{
	int year = 2007;
	int result;
	
	result = checkLeapYear(year);
	
	if(result == 1)
	    printf("2007 is leap year");
	else
	    printf("2007 is not leap year");             //function call
}

int checkLeapYear(int year)              //function defination
{
	
	if(year % 4==0 && year % 100!=0 || year % 400==0)
		return 1;
	else
		return 0;
	
}