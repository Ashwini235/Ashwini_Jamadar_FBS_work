#include<stdio.h>

void checkPalindrome(int num);  //function declaration

void main()
{
	int num = 151;
	checkPalindrome(num);  //function call
}

void checkPalindrome(int num)     //function defination
{
	int temp , rev = 0, rem;
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