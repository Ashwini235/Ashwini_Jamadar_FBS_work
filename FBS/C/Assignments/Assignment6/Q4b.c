#include<stdio.h>

int ckeckVowel();    //function declaration


void main()
{
	int result;
	result = checkVowel();  
	
	if(result == 1)
	   printf("character is vowel");
	else
	    printf("character is consonant");    //function call
}

int checkVowel()               //function defination
{
	char temp = 'z';
	
	if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
	   return 1;
	else
	   return 0;
}