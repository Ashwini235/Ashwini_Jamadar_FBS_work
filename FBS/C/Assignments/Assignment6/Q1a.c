#include<stdio.h>

void checkEvenOdd();   //function declaration
void main()
{
    checkEvenOdd();   //function call
}

void checkEvenOdd()  //function defination
{
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	if(no%2==0)	
       printf("Number is even");
       
    else
       printf("Number is odd");
	
}