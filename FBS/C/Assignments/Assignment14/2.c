#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void storeEmployee(struct Employee *e)
{
    printf("Enter Employee id name salary: "); 
    scanf("%d %s %f",&e->id,e->name,&e->salary);
}

void displayEmployee(struct Employee e)
{
    printf("\nEmployee Details:");
    printf("\nID     : %d",e.id);
    printf("\nName   : %s",e.name);
    printf("\nSalary : %.2f\n",e.salary);
}

void storeEmployeeArray(struct Employee e[],int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Employee %d id name salary: ",i+1);
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }
}

void displayEmployeeArray(struct Employee e[],int n)
{
    for(int i=0;i<n;i++)
        displayEmployee(e[i]);
}

int main()
{
    struct Employee e;
    storeEmployee(&e);     
    displayEmployee(e); 

    struct Employee a[2];
    storeEmployeeArray(a,2);  
    displayEmployeeArray(a,2);

    return 0;
}