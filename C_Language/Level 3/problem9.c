// Question: Get a two-digit number from user swap the digits.
// Example: Input: 34 Output: 43. Input: 56 Output: 65
#include <stdio.h>
int swap(int num){
    int firstDigit = num / 10;
    int secondDigit = num %10;
    return secondDigit * 10+ firstDigit;
}
int main() {
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    int result = swap(num);
    printf("%d",result);
    return 0;
}