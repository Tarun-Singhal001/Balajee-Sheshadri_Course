// Question: Get a Two-digit number from user and print the digit in “Ones" position
// Example: User Enters “78”
// Answer - 8
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("%d\n",num%10);
    return 0;
}