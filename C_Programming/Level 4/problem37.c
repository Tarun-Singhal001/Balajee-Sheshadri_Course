// Question: Get a number and print its ASCII Value.

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a one digit number: ");
    scanf("%c", &number);
    
    printf("ASCII value of %c is: %d\n", number, number);
    
    return 0;
}