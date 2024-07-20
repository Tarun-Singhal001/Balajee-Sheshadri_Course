// Question: Write a program to print the sum of all single digit odd numbers

// Answer : 25
#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i=1;i<10;i+= 2){
        sum += i;
    }
    printf("Sum of all single digit odd numbers: %d\n", sum);
    return 0;
}