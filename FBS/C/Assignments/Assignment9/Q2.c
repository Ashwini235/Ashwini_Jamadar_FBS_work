#include<stdio.h>

void Search(int a[], int n);         //function declaration


void main()
{
    int a[10], n, i;
    printf("Enter size: ");          //function call
    scanf("%d", &n);
                                          
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    Search(a, n);
}

void Search(int a[], int n)
{
    int i, num, found = 0;
    printf("Enter number to search: ");        //function defination
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");
}


