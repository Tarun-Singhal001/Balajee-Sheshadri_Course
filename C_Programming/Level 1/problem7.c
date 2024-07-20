// Question: Get a two-digit number from user and print the ten’s digit.
// Example: Input: 45 Output 4. Input: 56 Output: 5

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int tensDigit = num/10;
    printf("Ten's digit is: %d",tensDigit);
    return 0;
}