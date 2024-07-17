// Question: Write a program get number from user print whether that number is prime or not.

// Answer: Input : 31 - Output : Prime
// Input : 27 - Output : Not Prime.
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int isPrime = 1;
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}