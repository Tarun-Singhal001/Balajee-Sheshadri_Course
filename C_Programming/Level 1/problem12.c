// Question: Get a three-digit number from user and print sum the digits.
// Example: Input: 562 Output 13. Input: 469 Output: 19

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    int sum_of_digits = num%10 + (num%100)/10 + num/100;
    printf("Sum of digits is: %d",sum_of_digits);
    return 0;
}