// Question: Print the smallest Three digit prime number

// Answer: 101
#include <stdio.h>
#include <stdbool.h>  // Include stdbool.h for boolean data type

int main() {
    for (int i = 100; i < 1000; i++) {
        int isprime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }
        if (isprime) { 
            printf("%d is prime number\n", i);
            return 0;
        }
    }
    return 0;
}
