#include<stdio.h>
#include<string.h>

//structure defination
struct Mobile
{
	int mid;
	char mname[50];
	float price;
	char brand[50];
	
};
//function declarations
void acceptDetails(struct Mobile *m);
void displayDetails(struct Mobile m);


int main()
{
	struct Mobile mob[100];
	int n=0, choice =0, i;
	while(choice != 3)
	{
		printf("\n..Mobile  Menu...\n");
		printf("1. Accept Mobile Details\n");
		printf("2. Display Mobile Details\n");
		printf("3. Exit\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		
		if (choice == 1)
		{
			printf("how many mobiles do you want to enter?");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("\nEnter details of Mobile %d:\n",i+1);
				acceptDetails(&mob[i]);
			}
		}
		else if (choice == 2)
		{
			if (n == 0)
			{
				printf("\nNo mobile details entered yet!\n");
			}
			else
			{
				printf("\n..mobile details...\n");
				for (i =0; i<n; i++)
				{
					displayDetails(mob[i]);
				}
			}
     	}
     	else if (choice == 3)
     	{
     	    printf("Exiting program..\n");
		}
		else
		{
			printf("Invalid choice! please try again.\n");
		}
	}
	
}

void acceptDetails(struct Mobile *m)
{
	printf("Enter Mobile ID: ");
	scanf("%d", &m->mid);
	printf("Enter Mobile Name:");
	scanf("%s",m->mname);
	printf("Enter Brand: ");
	scanf("%s", m->brand);
	printf("Enter Price: ");
	scanf("%f", &m->price);
}
void displayDetails(struct Mobile m)
{
	printf("\nMobile ID : %d",m.mid);
	printf("\nName      :%s",m.mname);
	printf("\nBrand     :%s",m.brand);
	printf("\nPrice     :%2f\n",m.price);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	