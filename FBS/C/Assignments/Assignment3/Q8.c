#include<stdio.h>
void main()
{
	int no =145;
	int rem, sum=0;
	int fact;
	while(no>0)
	{
		rem = no%10;
		fact = 1;
		while(rem>1)
		{
			fact = fact*rem--;
		}
		sum=sum+fact;
		no=no/10;
	}
	if(sum==no)
	    printf("given number is strong number",no);
	    
	else
	    printf("number is strong number",no);
}