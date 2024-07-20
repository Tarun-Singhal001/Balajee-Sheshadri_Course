// Question: Write a program to get a number from user and print the reverse of that number

// Answer: Input : 123456 - Output – 654321
// Input : 76895439- Output – 93459867
// Input : 675 – Output - 576
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reverse = 0;
    while (num!= 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("%d", reverse);
    return 0;
}