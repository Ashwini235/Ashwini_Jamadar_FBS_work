#include<stdio.h>

void ckeckVowel();    //function declaration


void main()
{
	checkVowel();      //function call
}

void checkVowel()               //function defination
{
	char temp = 'z';
	
	if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
	   printf("character is vowel");
	else
	   printf("character is consonant");
}