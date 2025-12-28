#include<stdio.h>

int checkEvenOdd();  // function declaration

void main()
{
    int result;
     
    result = checkEvenOdd();  // function call
     
    if(result == 1)
        printf("Number is even");
    else
        printf("Number is odd");
     
}

int  checkEvenOdd()     //function defination
{
	int no;
	printf("Enter a number: ");
	scanf("%d", &no);
	
	if(no % 2 == 0)
	  return 1;
	else
	  return 0;
}