// Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is equal to 10, and one of the digits is more than 7 then print “Success”, otherwise print “Failure”.
// Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    int hundreds = num / 100%10;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    
    if ((hundreds + tens) == 10 && (tens>7 || hundreds>7)) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    return 0;
}