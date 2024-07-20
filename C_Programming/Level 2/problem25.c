// Question: Write a program get number from user print the total number of single-digit prime numbers in the number.

// Answer: Input: 163496481 - Output: 1
// Input: 364925 - Output: 3
#include <stdio.h>
int isPrime(int digit){
    if(digit < 2) return 0;
    for(int i = 2; i < digit; i++){
        if(digit % i == 0) return 0;
    }
    return 1;  // Prime number found, return 1
 
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0;
    while(num){
        int digit = num % 10;
        num /= 10;
        if(isPrime(digit)){
            count++;
        }
    }
    printf("Total number of single-digit prime numbers: %d", count);
    return 0;
}