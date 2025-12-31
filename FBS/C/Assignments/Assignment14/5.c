#include<stdio.h>

struct SalesManager
{
    int id, target;
    char name[20];
    float salary, incentive;
};

void storeSM(struct SalesManager *s)
{
    printf("Enter SalesManager id name salary incentive target: ");
    scanf("%d %s %f %f %d",&s->id,s->name,&s->salary,&s->incentive,&s->target);
}

void displaySM(struct SalesManager s)
{
    printf("\nSalesManager Details:");
    printf("\nID       : %d",s.id);
    printf("\nName     : %s",s.name);
    printf("\nSalary   : %.2f",s.salary);
    printf("\nIncentive: %.2f",s.incentive);
    printf("\nTarget   : %d\n",s.target);
}

void storeSMArray(struct SalesManager s[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter SalesManager %d id name salary incentive target: ", i+1);
        scanf("%d %s %f %f %d",&s[i].id,s[i].name,&s[i].salary,&s[i].incentive,&s[i].target);
    }
}

void displaySMArray(struct SalesManager s[], int n)
{
    for(int i=0;i<n;i++)
        displaySM(s[i]);
}

int main()
{
    struct SalesManager s1;
    storeSM(&s1);          
    displaySM(s1);         

    struct SalesManager arr[2];
    storeSMArray(arr,2);   
    displaySMArray(arr,2);

    return 0;
}

