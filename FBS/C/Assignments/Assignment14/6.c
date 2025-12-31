#include <stdio.h>

struct Date
{
    int day, month, year;
};

void storeDate(struct Date *d)
{
    printf("Enter date month year: ");
    scanf("%d %d %d",&d->day,&d->month,&d->year);
}

void displayDate(struct Date d)
{
    printf("\nDate: %02d/%02d/%04d\n",d.day,d.month,d.year);
}

void storeDateArray(struct Date d[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Date %d (day month year): ",i+1);
        scanf("%d %d %d",&d[i].day,&d[i].month,&d[i].year);
    }
}

void displayDateArray(struct Date d[], int n)
{
    for(int i=0;i<n;i++)
        displayDate(d[i]);
}

int main()
{
    struct Date d1;
    storeDate(&d1);         
    displayDate(d1);        

    struct Date arr[2];
    storeDateArray(arr,2);  
    displayDateArray(arr,2);

    return 0;
}