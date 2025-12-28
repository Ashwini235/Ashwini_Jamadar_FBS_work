#include<stdio.h>

void checkEvenOdd(int no);   //function declaration

void main()
{
    int no;
    printf("Enter a number: ");   //function call
    scanf("%d", &no);
    
    checkEvenOdd(no);
}

void checkEvenOdd(int no)        //function defination
{
	if(no % 2 == 0)
	  printf("Number is even");
	else
	  printf("Number is odd");
}