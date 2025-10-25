#include <stdio.h>

int main() 
{
    int choice = 0;
    int num;

    while (choice!=7)
	 {
        // Display menu
        printf("\n\n--- MENU ---\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime\n");
        printf("3. Check Palindrome\n");
        printf("4. Check Positive, Negative or Zero\n");
        printf("5. Reverse Number\n");
        printf("6. Sum of Digits\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7)
		 {
            printf("Program exited.\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        // 1. Even or Odd
        if (choice == 1)
		 {
            if (num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
        }

        // 2. Prime or Not
        else if (choice == 2) {
            int i = 2;
            int isPrime = 1;
            if (num < 2)
                isPrime = 0;
            while (i <= num / 2) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
                i++;
            }
            if (isPrime)
                printf("%d is Prime\n", num);
            else
                printf("%d is Not Prime\n", num);
        }

        // 3. Palindrome
        else if (choice == 3) {
            int n = num, rev = 0, rem;
            while (n > 0) {
                rem = n % 10;
                rev = rev * 10 + rem;
                n /= 10;
            }
            if (rev == num)
                printf("%d is a Palindrome\n", num);
            else
                printf("%d is Not a Palindrome\n", num);
        }

        // 4. Positive, Negative or Zero
        else if (choice == 4)
		 {
            if (num > 0)
                printf("%d is Positive\n", num);
            else if (num < 0)
                printf("%d is Negative\n", num);
            else
                printf("Number is Zero\n");
        }

        // 5. Reverse Number
        else if (choice == 5) 
		{
            int n = num, rev = 0, rem;
            while (n != 0) {
                rem = n % 10;
                rev = rev * 10 + rem;
                n /= 10;
            }
            printf("Reverse of %d is %d\n", num, rev);
        }

        // 6. Sum of digits
        else if (choice == 6)
		 {
            int n = num, sum = 0;
            while (n != 0) {
                sum += n % 10;
                n /= 10;
            }
            printf("Sum of digits of %d is %d\n", num, sum);
        }

        else {
            printf("Invalid choice! Please enter 1-7.\n");
        }
    }
}
    