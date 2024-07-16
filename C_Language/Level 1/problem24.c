// Question: Get a three-digit number from user and subtract 5 from that number if one’s digit number and 100’s digit number are same, then print the result. Do not use “if”.
// Example: Input: 595 Output 590. Input: 372 Output: 372
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = num - (num/100 == num%10)*5;
    printf("Result is: %d\n", new_num);
    return 0;
}