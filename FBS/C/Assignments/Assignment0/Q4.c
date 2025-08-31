#include<stdio.h>
void main()
{
	int a=10,b=30;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a is %d and b is %d",a,b);
}