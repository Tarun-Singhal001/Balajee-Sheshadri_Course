// Question: Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
// Example: Input: 695 Output 690. Input: 182 Output: 182

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = (num%2)*5 + num;
    printf("Result is: %d\n", new_num);
    return 0;
}