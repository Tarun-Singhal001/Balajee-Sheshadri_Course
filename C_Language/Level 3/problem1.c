// Question: Get a number from user and add 2 to that number and print the result. Write your code inside the function. Do not Change the Code.

// Example: Input :45 Output 47. Input:56789 Output:56791
#include <stdio.h>
void add_2(int *num){
    *num += 2;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    add_2(&num);
    printf("%d",num);
    return 0;
}