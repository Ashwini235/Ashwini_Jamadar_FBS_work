#include<stdio.h>

int checkLeapYear();    //function declaration

void main()
{
	int result;
	result = checkLeapYear();
	
	if(result == 1)
	    printf("%d is leap year");
	else
	    printf("%d is not leap year");             //function call
}

int checkLeapYear()              //function defination
{
	int year = 2007;
	
	if(year % 4==0 && year % 100!=0 || year % 400==0)
		return 1;
	else
		return 0;
	
}