// Question: Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
// Example: Input: 9561 Output 9516. Input: 3859 Output: 3895

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = ((num/100)*10 + num%10)*10 + (num%100)/10;
    printf("First two digit reversed number is: %d",reversed);
    return 0;
}