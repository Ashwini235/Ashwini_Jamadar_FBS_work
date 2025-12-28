#include<stdio.h>

void ckeckVowel(char temp);    //function declaration


void main()
{
	char temp = 'z';
	checkVowel(temp);      //function call
}

void checkVowel(char temp)               //function defination
{

	if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
	   printf("character is vowel");
	else
	   printf("character is consonant");
}