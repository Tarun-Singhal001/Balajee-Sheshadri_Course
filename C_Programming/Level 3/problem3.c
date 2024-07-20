// Question: Get a number from user and Check whether the sum of digits is 14 and print the result. Write your code inside the function. Do not Change the format.

// Example: Input: 59 Output: Sum of Digits is 14. Input :123 Output: Sum of digits is not 14
#include <stdio.h>
    void sum_of_digit(int num){
        int sum = 0;
        while(num!= 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum == 14){
            printf("Sum of digits is 14.\n");
        } else {
            printf("Sum of digits is not 14.\n");
        }
    }
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum_of_digit(num);
    return 0;
}