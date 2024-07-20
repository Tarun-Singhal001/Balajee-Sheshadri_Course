// Question: Write a program to get a number from user and print the sum of all digits.

// Answer: Input: 123456 - Output – 21
// Input: 76895439 - Output – 51
// Input: 675 – Output - 18

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}