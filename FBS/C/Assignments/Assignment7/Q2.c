#include<stdio.h>

#include<stdio.h>

void checkPalindrome(int *num);   // function declaration

void main()
{
    int no = 151;
    checkPalindrome(&no);         // function call
}

void checkPalindrome(int *num)    // function definition
{
    int temp = *num;
    int rev = 0, rem;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == *num)
        printf("number is Palindrome");
    else
        printf("number is not Palindrome");
}