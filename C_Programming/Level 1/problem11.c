// Question: Get a two-digit number from user and print sum the digits.
// Example: Input: 56 Output 11. Input: 69 Output: 15

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a two digit number: ");
    scanf("%d",&num);
    int sum_of_digits = num%10 + num/10;
    printf("Sum of digits is: %d",sum_of_digits);
    return 0;
}