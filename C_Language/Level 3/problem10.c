// Question: Get a number from user, find the number of digits and print the same.
// Example: Input: 34678 Output: 5. Input: 12345678 Output: 8
#include <stdio.h>
int count_digits(int num){
    int count = 0;
    while(num){
        count++;
        num /= 10;
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = count_digits(num);
    printf("Number of digits: %d\n", result);
    return 0;
}