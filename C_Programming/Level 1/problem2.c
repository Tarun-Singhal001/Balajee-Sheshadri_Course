// Question: Get a number from user and subtract 5 to that number and print the result.

// Example: Input :45 Output 40. Input:56789 Output:56784

#include <stdio.h>
void sub_5(int *num){
    *num -= 5;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    sub_5(&num);
    printf("Result: %d",num);
    return 0;
}