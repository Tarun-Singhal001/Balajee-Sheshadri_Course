// Question: Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
// Example: Input: 9561 Output 5961. Input: 3859 Output: 8359

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = (((num%1000)/100)*10 + num/1000)*100 + num%100;
    printf("Reversed num is: %d",reversed);
    return 0;
}