#include<stdio.h>
void main()
{
	int a=10, b=20, c=15;
	if(a>b)
	{
       	if(a>c)	
       	    printf("%d is greater\n",a);
       	else
        	printf("%d is greater\n",c);
	}
	else
	{
		if(b>c)	
       	    printf("%d is greater\n",b);
       	else
      	    printf("%d is greater\n",c);
  }
}