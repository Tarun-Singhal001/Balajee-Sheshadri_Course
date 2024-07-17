// Question: Write a program to print biggest 4-digit number which is divisible by 7 and 9.
#include <stdio.h>
    
int main() {
    int largest_number = 9999;
    int divisible_by = 63; // LCM of 7 and 9
    
    // Find the largest 4-digit number divisible by 63
    while (largest_number > 1000) {
        if (largest_number % divisible_by == 0) {
            printf("The largest 4-digit number divisible by 7 and 9 is: %d\n", largest_number);
            break;
        }
        largest_number--;
    }
    return 0;
}