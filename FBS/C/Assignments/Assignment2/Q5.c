#include<stdio.h>
void main()
{
	int price, final_price;
	printf("enter the price");
	scanf("%d",&price);      
	
	
	printf("are you a student?(y/n):");
	char student;
	scanf("%c",&student);
	
	if(student =='y')
	{
		if(price>500)
		{
			final_price=price-(price*0.2);
			printf("final price %2f",final_price);
		}
		else
		{
			final_price=price-(price*0.1);
			printf("final price %2f",final_price);
		}
	if(student =='n')
	{
		if(price>600)
		{
			final_price=price-(price*0.15);
			printf("final price %2f",final_price);
		}
		else
		{
			final_price=price-(price*0.0);
			printf("final price %2f",final_price);
		}
		}
	}
}