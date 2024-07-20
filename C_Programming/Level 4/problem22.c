// Question: Write a program to print total number of THREE digit Prime numbers

// Answer - 143
#include <stdio.h>
    
int main() {
    int count = 0;
    
    for (int i = 100; i < 1000; i++) {
        int is_prime = 1;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        
        if (is_prime) {
            count++;
        }
    }
    
    printf("Total number of single digit prime numbers is: %d\n", count);
    
    return 0;
}