#include <stdio.h>

struct Time
{
    int hour, min, sec;
};

void storeTime(struct Time *t)
{
    printf("Enter hour minute second: ");
    scanf("%d %d %d",&t->hour,&t->min,&t->sec);
}

void displayTime(struct Time t)
{
    printf("\nTime: %02d:%02d:%02d\n",t.hour,t.min,t.sec);
}

void storeTimeArray(struct Time t[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Time %d (hour minute second): ",i+1);
        scanf("%d %d %d",&t[i].hour,&t[i].min,&t[i].sec);
    }
}

void displayTimeArray(struct Time t[], int n)
{
    for(int i=0;i<n;i++)
        displayTime(t[i]);
}

int main()
{
    struct Time t1;
    storeTime(&t1);     
    displayTime(t1);      

    struct Time arr[2];
    storeTimeArray(arr,2);  
    displayTimeArray(arr,2);

    return 0;
}