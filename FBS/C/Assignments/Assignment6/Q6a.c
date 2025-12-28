#include<stdio.h>

void checkCase();       //function declaration

void main()
{
	checkCase();      //function call
}

void checkCase()       //function defination
{
	char ch = 'z';
	
	if(ch >= 'a' && ch <= 'z')
	   printf("character is in Lowercase");
	else
	   printf("character is in Uppercase");
}