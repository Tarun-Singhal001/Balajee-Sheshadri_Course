// Question: Get two numbers of up to 50 digits and perform addition and print the result.
#include <stdio.h>
void add_large_numbers(char num1[], char num2[], char result[]) {
    int len1 = 0, len2 = 0;
    int carry = 0, sum = 0;
    int index = 0;
    
    while (num1[len1] != '\0') {
        len1++;
    }
    while (num2[len2] != '\0') {
        len2++;
    }
    
    int max_len = (len1 > len2 ? len1 : len2) + 1; 
    char temp_result[max_len];
    
    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        
        sum = digit1 + digit2 + carry;
        temp_result[index++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    
    temp_result[index] = '\0';
    
    for (int i = 0, j = index - 1; i < j; i++, j--) {
        char temp = temp_result[i];
        temp_result[i] = temp_result[j];
        temp_result[j] = temp;
    }
    
    for (int i = 0; temp_result[i] != '\0'; i++) {
        result[i] = temp_result[i];
    }
    result[index] = '\0'; 
}

int main() {
    char num1[51], num2[51], result[52]; 
    printf("Enter the first number (up to 50 digits): ");
    scanf("%s", num1);
    printf("Enter the second number (up to 50 digits): ");
    scanf("%s", num2);
    
    add_large_numbers(num1, num2, result);
    
    printf("The sum of %s and %s is:\n%s\n", num1, num2, result);
    
    return 0;
}
