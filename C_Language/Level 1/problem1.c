// Question: Get a number from user and add 2 to that number and print the result.
// Example: Input :45 Output 47. Input:56789 Output:56791

#include <stdio.h>

void add_2(int *number) {
    *number += 2;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    add_2(&num);
    printf("Result: %d\n", num);
    return 0;
}