#include <stdio.h>

struct HR
{
    int id;
    char name[20];
    float salary, commission;
};

void storeHR(struct HR *h)
{
    printf("Enter HR id name salary commission: ");
    scanf("%d %s %f %f",&h->id,h->name,&h->salary,&h->commission);
}

void displayHR(struct HR h)
{
    printf("\nHR Details:");
    printf("\nID        : %d",h.id);
    printf("\nName      : %s",h.name);
    printf("\nSalary    : %.2f",h.salary);
    printf("\nCommission: %.2f\n",h.commission);
}

void storeHRArray(struct HR h[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter HR %d id name salary commission: ", i+1);
        scanf("%d %s %f %f",&h[i].id,h[i].name,&h[i].salary,&h[i].commission);
    }
}

void displayHRArray(struct HR h[], int n)
{
    for(int i=0;i<n;i++)
        displayHR(h[i]);
}

int main()
{
    struct HR h1;
    storeHR(&h1);      
    displayHR(h1);    

    struct HR arr[2];
    storeHRArray(arr,2);
    displayHRArray(arr,2);

    return 0;
}