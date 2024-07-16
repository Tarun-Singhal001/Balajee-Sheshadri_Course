// Question: Get a two digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use “if”.
// Example: Input: 95 Output 95. Input: 72 Output: 67

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = num - ((num%10 + num/10)%2)*5;
    printf("Result is: %d\n", new_num);
    return 0;
}