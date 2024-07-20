// Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is greater than 10, then print “Success”, otherwise print “Failure”.
// Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    int ten_digit = num % 100 / 10;
    int hundred_digit = num / 100 % 10;
    
    if (ten_digit + hundred_digit > 10) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}