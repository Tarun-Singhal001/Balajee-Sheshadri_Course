// Question: Get a three-digit number from user. If the sum of the one’s digit and hundred’s digit is less than 10, then print “Success”, otherwise print “Failure”.
// Example: Input: 569 - Output Failure. Input: 316 - Output: Success.
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int ones = num % 10;
    
    if (hundreds + tens < 10) {
        printf("Success\n");
    }
    else printf("Failure");
    return 0;
}