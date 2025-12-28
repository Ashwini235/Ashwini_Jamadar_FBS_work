#include<stdio.h>

int checkPalindrome(int num);  //function declaration

void main()
{
	int num = 151, result;
	
	result = checkPalindrome(num);            //function call
	
	if(result == 1)
	    printf("Number is palindrome");
	else
	    printf("Number is not palindrome");
   
}

int checkPalindrome(int num)     //function defination
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
	    return 1;
	else
	    return 0;
}