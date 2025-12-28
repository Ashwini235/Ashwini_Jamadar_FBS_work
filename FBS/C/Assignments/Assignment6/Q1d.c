#include<stdio.h>

int  checkEvenOdd(int no);     //function declaration

void main()
{
	int no,result;
	
	printf("Enter a number: ");    //function call
	scanf("%d", &no);

    result = checkEvenOdd(no);
    if(result == 1)
      printf("Number is even");
    else
      printf("Number is odd");
    
}
 
int checkEvenOdd(int no)             //function defination
{
	
	if(no%2==0)	
       return 1;
    else
       return 0;
}