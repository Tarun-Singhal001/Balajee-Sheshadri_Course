// Question: Get a number from user and reverse that number and print. Write your code inside the function. Do not Change the format.

// Example: Input: 123 Output: 321. Input: 56789 Output: 98765.
#include <stdio.h>
int reverse_number(int no){
    int reversed_num = 0;
    while (no) {
        int remainder = no % 10;
        reversed_num = reversed_num * 10 + remainder;
        no = no / 10;
    }
    return reversed_num;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = reverse_number(num);
    printf("Reversed number: %d\n", result);
    return 0;
}