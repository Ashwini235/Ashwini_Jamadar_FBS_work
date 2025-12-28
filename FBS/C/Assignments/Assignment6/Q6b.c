#include<stdio.h>

int checkCase();    //function declaration

void main()
{
	int result;
	result = checkCase();    //function call
	
	if(result == 1)
	  printf("character is in Lowercase");
	else
	  printf("character is in Uppercase");
}

int checkCase()         //function defination
{
	char ch = 'z';
	
	if(ch >= 'a' && ch <= 'z')
	   return 1;
	else
	   return 0;
}