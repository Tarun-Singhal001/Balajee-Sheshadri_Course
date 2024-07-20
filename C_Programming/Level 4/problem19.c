// Question: Write a program to print the sum of all THREE digit odd numbers

// Answer : 247500
#include <stdio.h>
    
int main() {
    int sum =0;
    for(int i=101;i<1000;i+= 2){
        sum += i;
    }
    
    printf("The sum of all three-digit odd numbers is: %d\n", sum);
    return 0;
}