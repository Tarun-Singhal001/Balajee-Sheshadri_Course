// Question: Get a number from the user and print the sum of all digits.
// Example: User Enters “123456”
// Answer - 21
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a two digit num: ");
    scanf("%d", &num);
    int sum = 0;
    while(num){
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}