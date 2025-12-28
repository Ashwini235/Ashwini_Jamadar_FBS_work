#include<stdio.h>

void checkStrong(int *num);   // function declaration

void main()
{
    int n = 145;

    checkStrong(&n);   // function call
}

void checkStrong(int *num)   // function definition
{
    int tempNum = *num;
    int sum = 0;

    while(tempNum > 0)
    {
        int rem = tempNum % 10;
        int fact = 1;
        int i;

        for(i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;
        tempNum /= 10;
    }

    if(sum == *num)
        printf("Given number is a Strong number");
    else
        printf("Given number is not a Strong number");
}