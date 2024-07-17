// Question: Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
// Answer: Input: 59 - Output: Prime & Sum of Digits is 14
// Input: 77 - Output: Not Prime but sum of digits is 14
// Input: 13 - Output: Prime, but sum of Digits is not 14
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = 0;
    int prime = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number", num);

    }
    
    for (int i = num; i > 0; i /= 10) {
        sum += i % 10;
    }
    
    if (sum == 14) {
        printf(" and sum of digits is 14.\n");
    } else {
        printf(" and sum of digits is not 14.\n");
    }
    return 0;
}