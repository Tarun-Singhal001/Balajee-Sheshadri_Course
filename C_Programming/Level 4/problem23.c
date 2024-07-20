// Question: Write a program to print the sum of single digit Prime numbers

// Answer: 18
#include <stdio.h>
    
int main() {
    int sum = 0;
    
    for (int i = 1; i < 10; i++) {
        int is_prime = 1;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        
        if (is_prime) {
            sum += i;
        }
    }
    
    printf("Total sum of single digit prime numbers is: %d\n", sum);
    
    return 0;
}