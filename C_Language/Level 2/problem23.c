// Question: Write a program get number from user print the total number of single-digit perfect square numbers in the number.

// Answer: Input: 123456789 - Output: 3
// Input: 987531 - Output: 2
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
        int last_digit = num % 10;
        if(isPerfectSquare(last_digit)){
            count++;
        }
        num /= 10;
    }
    printf("Total number of single-digit perfect square numbers: %d\n", count);
    return 0;
}