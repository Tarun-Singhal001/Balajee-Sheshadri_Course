// Question: Get two numbers from user and compare the numbers. If same print “Same” otherwise print “Not Same”. Write your code inside the function.
// Do not Change the format.

// Example: Input: 123, 123 Output: Same. Input: 56789,12345 Output: “Not Same”
#include <stdio.h>
int compare_numbers(int num1,int num2){
    if (num1 == num2) {
        return 1;
    } else {
        return 0;
    } 
}
int main() {
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = compare_numbers(num1,num2);
    if (result ==1) {
        printf("Same");
    } else {
        printf("Not Same");
    }
    return 0;
}