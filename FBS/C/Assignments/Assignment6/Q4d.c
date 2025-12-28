#include<stdio.h>

int ckeckVowel(char temp);    //function declaration


void main()
{
	char temp = 'z';
	int result;
	result = checkVowel(temp);  
	
	if(result == 1)
	   printf("character is vowel");
	else
	    printf("character is consonant");    //function call
}

int checkVowel(char temp)               //function defination
{
	
	if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
	   return 1;
	else
	   return 0;
}