// Write a program to multiply up to two 50 digit numbers.
#include <stdio.h>
#include <string.h>
void multiply_large_numbers(char num1[], char num2[], char result[]) {
    int product[1000] = {0};
    int len1 = 0, len2 = 0;
    while (num1[len1] != '\0') len1++;
    while (num2[len2] != '\0') len2++;
    
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int pos = i + j + 1;
            
            int prod = digit1 * digit2 + product[pos];
            product[pos] = prod % 10;
            product[pos - 1] += prod / 10;
        }
    }
    
    int start = 0;
    while (product[start] == 0 && start < 999) {
        start++;
    }
    
    int index = 0;
    for (int i = start; i <= len1 + len2; i++) {
        result[index++] = product[i] + '0';
    }
    result[index] = '\0';
    if (index == 0) {
        result[0] = '0';
        result[1] = '\0';
    }
}
int main() {
    char num1[1000];
    char num2[1000];
    char result[2000];
    printf("Enter the first number (up to 50 digits): ");
    scanf("%s", num1);
    printf("Enter the second number (up to 50 digits): ");
    scanf("%s", num2);
    multiply_large_numbers(num1, num2, result);
    int length = strlen(result);
    printf("The product of %s and %s is:\n%s\n", num1, num2, result);
    return 0;
}
