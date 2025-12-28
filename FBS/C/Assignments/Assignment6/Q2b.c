#include<stdio.h>

int  checkPalindrome();  //function declaration

void main()
{
	int result;
	
	result = checkPalindrome();
	
	if(result == 1)
	    printf("Number is palindrome");
	else
	    printf("Number is not palindrome");   //function call
}

int checkPalindrome()     //function defination
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
	   return 1;
	else
	   return 0;
}