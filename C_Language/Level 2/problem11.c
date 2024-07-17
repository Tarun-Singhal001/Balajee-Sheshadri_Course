// Question: Write a program to get a number from user print the total number of digits in that number
// Answer: Input : 123456 - Output – 6
// Input : 76895439- Output – 8
// Input : 675 – Output - 3

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0;
    while(num!= 0){
        count += 1;
        num /= 10;
    }
    printf("Total number of digits in the given number: %d\n", count);
    return 0;
}