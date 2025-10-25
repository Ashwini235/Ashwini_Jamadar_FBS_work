#include <stdio.h>

void main() {
    int n = 50;    
    int num = 2;   

    while (num <= n) {
        int i = 2;
        int isPrime = 1;  

        
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
            i++;
        }

        if (isPrime)
            printf("%d ", num);

        num++;
    }

}
