// Question: Program to print the sum of all TWO digit Prime numbers

// Answer: 1043
#include <stdio.h>
    
int main() {
    int sum = 0;
    
    for (int i = 10; i < 100; i++) {
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
    
    printf("Total sum of two digit prime numbers is: %d\n", sum);
    
    return 0;
}