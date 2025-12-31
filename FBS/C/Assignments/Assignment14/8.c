#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
};

void storeDistance(struct Distance *d)
{
    printf("Enter feet inch: ");
    scanf("%d %f",&d->feet,&d->inch);
}

void displayDistance(struct Distance d)
{
    printf("\nDistance: %d feet %.2f inch\n",d.feet,d.inch);
}

void storeDistanceArray(struct Distance d[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Distance %d (feet inch): ", i+1);
        scanf("%d %f",&d[i].feet,&d[i].inch);
    }
}

void displayDistanceArray(struct Distance d[], int n)
{
    for(int i=0;i<n;i++)
        displayDistance(d[i]);
}

int main()
{
    struct Distance d1;
    storeDistance(&d1);      
    displayDistance(d1);      

    struct Distance arr[2];
    storeDistanceArray(arr,2);  
    displayDistanceArray(arr,2);

    return 0;
}