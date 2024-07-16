// Question: Get a two-digit number from user and print the one’s digit.
// Example: Input: 45 Output 5. Input: 56 Output: 6

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a two digit number: ");
    scanf("%d", &num);
    
    int onesDigit = num % 10;
    printf("one's digit is: %d",onesDigit);
    return 0;
}