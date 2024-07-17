// Question: Write a program to get a 4-digit number from user, print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.

// Answer: Input: 6359 - Output: Not Prime
// Input: 3517 - Output: Not Prime
// Input: 3137 - Output: Prime
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int second_two_digit = num%1000/10;
    
    int isPrime = 1;
    
    for (int i = 2; i <= second_two_digit / 2; i++) {
        if (second_two_digit % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("Second two digit of %d is a prime number.\n", num);
    } else {
        printf("Second two digit of %d is not a prime number.\n", num);
    }
    return 0;
}