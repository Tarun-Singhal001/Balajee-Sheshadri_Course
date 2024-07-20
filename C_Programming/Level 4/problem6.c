// Question: Get a Two digit number from the user and print the reverse of it.
// Example: User Enters “73”
// Answer - 37
#include <stdio.h>
void reverse(int *num){
    int temp = *num;
    *num = 0;
    while(temp){
        int remainder = temp%10;
        *num = *num*10 + remainder;
        temp /= 10;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverse(&num);
    printf("Reverse of Number is: %d", num);
    return 0;
}