// Question: Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum.
// Note: The result should be always single digit only.
// Example: Input: 123 – Output: 6
// Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
// Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    int sum = num / 100 + (num / 10) % 10 + num % 10;
    
    if (sum < 10) {
        printf("Sum of digits: %d\n", sum);
    } else {
        int sumOfDigits = sum / 10 + sum % 10;
        if(sumOfDigits < 10){
            printf("Sum of digits: %d\n", sumOfDigits);
        }
        else{
            sumOfDigits = sumOfDigits/10 + sumOfDigits%10;
            printf("Sum of digits: %d\n",sumOfDigits);
        }
    }
    return 0;
}