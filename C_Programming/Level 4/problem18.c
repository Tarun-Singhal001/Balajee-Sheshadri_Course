// Question: Write a program to print the sum of all TWO digit odd numbers

// Answer : 2475
#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i=11;i<100;i+= 2){
        sum += i;
    }
    printf("Sum of all two-digit odd numbers: %d\n", sum);
    return 0;
}