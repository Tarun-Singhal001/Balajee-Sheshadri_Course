// Question: Get a number from user and divide the number by 8 and print the remainder.

// Example: Input: 45 Output 5. Input: 143 Output: 7

#include <stdio.h>
void remainder_8(int *num){
    *num %= 8;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    remainder_8(&num);
    printf("Result: %d",num);
    return 0;
}