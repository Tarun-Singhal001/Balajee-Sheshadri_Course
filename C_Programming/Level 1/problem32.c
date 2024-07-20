// Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, otherwise print the difference.
// Example: Input: 56 78 – Output: 22
// Input: 14 65 - Output: 79

#include <stdio.h>
    
int main() {
    int num1,num2;
    printf("Enter two 2-digit numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1 + num2<100){
        printf("Sum: %d\n", num1 + num2);
    }
    else{
        if(num1>num2){
            printf("Difference: %d\n", num1 - num2);
        }
        else{
            printf("Difference: %d\n", num2 - num1);
        }
    }
    return 0;
}
