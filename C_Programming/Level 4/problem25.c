// Question: Program to Print the sum of all THREE digit Prime numbers

// Answer : 75067
#include <stdio.h>
    
int main() {
    int sum = 0;
    
    for (int i = 100; i < 1000; i++) {
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
    
    printf("Total sum of three digit prime numbers is: %d\n", sum);
    
    return 0;
}