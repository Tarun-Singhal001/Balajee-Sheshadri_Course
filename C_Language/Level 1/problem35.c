// Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the numbers. Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
// Example: Input: 856 978 – Output: 24
// Input: 128 365 - Output: 11

#include <stdio.h>
    
int main() {
    int num1,num2;
    printf("Enter two 3-digit numbers: ");
    scanf("%d %d",&num1,&num2);
    
    int sum1 = (num1 / 100) + (num1 % 10);
    int sum2 = (num2 / 100) + (num2 % 10);
    
    if(sum1 > sum2)
    {
        int totalSum = sum1 + ((num1 / 10)%10);
        printf("Sum of all digits of the number whose sum of one's and hundred's digits is bigger: %d\n", totalSum);
    }
    else{
        int totalSum = sum2 + ((num2 / 10)%10);
        printf("Sum of all digits of the number whose sum of one's and hundred's digits is bigger: %d\n", totalSum);
    }
    return 0;
}