// Question: Get a number from user and divide the number by 6 and print the quotient.

// Example: Input: 45 Output 7. Input: 143 Output: 23

#include <stdio.h>
void divide_6(int *num){
    *num /= 6;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    divide_6(&num);
    printf("Result is: %d",num);
    return 0;
}