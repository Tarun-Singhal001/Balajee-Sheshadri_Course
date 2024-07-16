// Question: Get a number from user and multiply 3 to that number and print the result.

// Example: Input: 45 Output 135. Input: 1200 Output: 3600
#include <stdio.h>
void mul_5(int *num){
    *num *=5;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    mul_5(&num);
    printf("Result is: %d",num);
    return 0;
}