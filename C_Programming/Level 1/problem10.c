// Question: Get a three-digit number from user and print the ten’s digit.
// Example: Input: 456 Output 5. Input: 569 Output: 6
#include <stdio.h>
    
int main() {
    int num = 908;
    // printf("Enter a three digit number: ");
    // scanf("%d",&num);
    int tens_digit = (num%100)/10;
    printf("Result is: %d",tens_digit);
    return 0;
}