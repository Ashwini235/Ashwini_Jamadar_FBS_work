#include<stdio.h>
void main()
{
	int no=121;
	int n=no;
	int rev=0;
	int rem;
	
	while(n>0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n = n/10;
	}
	if(rev==no)
    	printf("number is palindrome",no);
    else
        printf("number is not palindrome",no);
  
}