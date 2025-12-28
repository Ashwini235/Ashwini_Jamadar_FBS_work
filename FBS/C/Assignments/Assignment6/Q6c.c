#include<stdio.h>

void checkCase(char ch);

void main()
{
	char ch = 'z';
	checkCase(ch);
}

void checkCase(char ch)
{
	
	if(ch >= 'a' && ch <= 'z')
	   printf("character is in Lowercase");
	else
	   printf("character is in Uppercase");
}