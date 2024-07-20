// Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
// Example: Input: 56 78 – Output: 15
// Input: 14 65 - Output: 11

#include <stdio.h>
    
int main() {
    int num1, num2;
    printf("Enter two 2-digit numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if( num1>num2){
        printf("Sum: %d",num1%10 + num1/10);
    }
    else{
        printf("Sum: %d",num2%10 + num2/10);
    }
    return 0;
}