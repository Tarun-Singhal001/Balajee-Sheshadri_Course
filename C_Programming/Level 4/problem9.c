// Question: Get a Two digit number from the user and print the sum of all digits.
// Example: User Enters “78”
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a two digit num: ");
    scanf("%d", &num);
    printf("Sum of digits: %d",num%10 + num/10);
    return 0;
}