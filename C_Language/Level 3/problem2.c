// Question: Get a number from user and subtract 5 to that number and print the result. Write your code inside the function. Do not Change the format.

// Example: Input :45 Output 40. Input:56789 Output:56784
#include <stdio.h>
void min_5(int *num){
    *num -= 5;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    min_5(&num);
    printf("Result: %d\n", num);
    return 0;
}