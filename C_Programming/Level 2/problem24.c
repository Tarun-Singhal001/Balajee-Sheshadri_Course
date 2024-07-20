// Question: Write a program get number from user print the total number of two-digit perfect square numbers in the number.

// Answer: Input: 163496481 - Output: 4
// Input: 364925 - Output: 4
#include <stdio.h>
int isPerfectSquare(int n) {
    int sqrt_n = 1;
    while (sqrt_n * sqrt_n < n) {
        sqrt_n++;
    }
    return (sqrt_n * sqrt_n == n);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int count = 0;
    while(num){
        int last_two_digit = num % 100;
        if(isPerfectSquare(last_two_digit)){
            count++;
        }
        num /= 10;
    }
    printf("Total number of single-digit perfect square numbers: %d\n", count);
    return 0;
}