#include<stdio.h>

int checkCase(char ch);   //function declaration

void main()
{ 
    char ch = 'z';
	int result;                //function call
	result = checkCase(ch);
	
	if(result == 1)
	  printf("character is in Lowercase");
	else
	  printf("character is in Uppercase");
}

int checkCase(char ch)          //function defination
{
	
	if(ch >= 'a' && ch <= 'z')
	   return 1;
	else
	   return 0;
}