// Question: Write a program to get number from user, print whether that number’s first two digits (ten’s digits and one’s digit) is prime.

// Answer: Input: 359 - Output: Prime
// Input: 3577 - Output: Not Prime
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int first_two = num%100;
    
    int isPrime = 1;
    
    for (int i = 2; i <= first_two / 2; i++) {
        if (first_two % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("first two digit of %d is a prime number.\n", num);
    } else {
        printf("first two digit of %d is not a prime number.\n", num);
    }
    return 0;
}