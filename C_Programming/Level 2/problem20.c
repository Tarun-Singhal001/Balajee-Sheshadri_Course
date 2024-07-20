// Question: Write a program print total number of single digit Prime numbers
// Answer: 4
#include <stdio.h>
    
int main() {
    for(int j=1;j<9;j++){ 
        int isPrime = 1;
        
        for (int i = 2; i <= j / 2; i++) {
            if (j % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n",j);
        }
    }
    return 0;
}