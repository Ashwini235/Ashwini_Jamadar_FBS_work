#include <stdio.h>

struct Admin
{
    int id;
    char name[20];
    float salary, allowance;
};

void storeAdmin(struct Admin *a)
{
    printf("Enter Admin id name salary allowance: ");
    scanf("%d %s %f %f",&a->id,a->name,&a->salary,&a->allowance);
}

void displayAdmin(struct Admin a)
{
    printf("\nAdmin Details:");
    printf("\nID        : %d",a.id);
    printf("\nName      : %s",a.name);
    printf("\nSalary    : %.2f",a.salary);
    printf("\nAllowance : %.2f\n",a.allowance);
}

void storeAdminArray(struct Admin a[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Admin %d id name salary allowance: ", i+1);
        scanf("%d %s %f %f",&a[i].id,a[i].name,&a[i].salary,&a[i].allowance);
    }
}

void displayAdminArray(struct Admin a[], int n)
{
    for(int i=0;i<n;i++)
        displayAdmin(a[i]);
}

int main()
{
    struct Admin a1;
    storeAdmin(&a1);      
    displayAdmin(a1);     

    struct Admin arr[2];
    storeAdminArray(arr,2);  
    displayAdminArray(arr,2);

    return 0;
}