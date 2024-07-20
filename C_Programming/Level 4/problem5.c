// Question: Get a Three digit number from user and print the digit in “Hundreds”position
// Example: User Enters “738”
// Answer - 7
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("%d\n",num/100);
    return 0;
}