// Question: Get a three-digit number from user and print the hundred’s digit.
// Example: Input: 456 Output 4. Input: 569 Output: 5

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    int h_digit = num/100;
    printf("hundred's digit is: %d",h_digit);
    return 0;
}