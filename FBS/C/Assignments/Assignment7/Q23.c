#include<stdio.h>

void checkPalindrome(int *num);   // function declaration

void main()
{
    int n = 121;

    checkPalindrome(&n);   // function call
}

void checkPalindrome(int *num)   // function definition
{
    int temp = *num;
    int rev = 0, rem;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if(rev == *num)
        printf("Number %d is Palindrome", *num);
    else
        printf("Number %d is not Palindrome", *num);
}