#include<stdio.h>

void checkPalindrome();  //function declaration

void main()
{
	checkPalindrome();   //function call
}

void checkPalindrome()     //function defination
{
	int num = 151, temp, rev = 0, rem;
	temp = num;
	
	while(temp !=0)
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp/10;
	}
	
	if(rev == num )
	  printf("Number is palindrome");
	else
	  printf("Number is not palindrome");
}