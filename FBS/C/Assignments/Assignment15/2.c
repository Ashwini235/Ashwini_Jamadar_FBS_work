#include <stdio.h>

struct time
{
    int hr, min, sec;
};


void acceptTime(struct time *t)
{
    printf("Enter hours: ");
    scanf("%d", &t->hr);

    printf("Enter minutes: ");
    scanf("%d", &t->min);

    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}


void displayTime(struct time t)
{
    printf("%02d:%02d:%02d\n", t.hr, t.min, t.sec);

}
struct time addTime(struct time t1, struct time t2)
{
    struct time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hr  = t1.hr  + t2.hr;

    if (t3.sec >= 60)
    {
        t3.min += t3.sec / 60;
        t3.sec = t3.sec % 60;
    }

    if (t3.min >= 60)
    {
        t3.hr += t3.min / 60;
        t3.min = t3.min % 60;
    }

    return t3;
}


int convertToSeconds(struct time t)
{
    return (t.hr * 3600) + (t.min * 60) + t.sec;
}

int main()
{
    struct time t1, t2, sum;
    int totalSec;

    printf("Enter first time:\n");
    acceptTime(&t1);

    printf("\nEnter second time:\n");
    acceptTime(&t2);

    printf("\nFirst Time  : ");
    displayTime(t1);

    printf("Second Time : ");
    displayTime(t2);

    sum = addTime(t1, t2);

    printf("\nSum of Time : ");
    displayTime(sum);

    totalSec = convertToSeconds(sum);
    printf("\nTotal seconds of summed time = %d\n", totalSec);

    return 0;
}