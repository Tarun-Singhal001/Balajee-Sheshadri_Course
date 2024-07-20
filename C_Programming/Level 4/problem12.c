// Question: Get a number from the user and print the reverse of it.
// Example: User Enters “123456”
// Answer - 654321
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reversed = 0;
    while (num) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reversed number is: %d",reversed);
    return 0;
}