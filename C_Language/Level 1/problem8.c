// Question: Get a three-digit number from user and print the one’s digit.
// Example: Input: 456 Output 6. Input: 569 Output: 9

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    int ones_digit = num %10;
    printf("one's digit is: %d",ones_digit);
    return 0;
}