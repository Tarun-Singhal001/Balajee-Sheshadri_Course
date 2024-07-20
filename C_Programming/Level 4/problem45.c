// Question: Get a number up to 50 digits and reverse it.

// E.g.: 12345678912345
// Answer: 54321987654321
#include <stdio.h>
#include <string.h>

int main() {
    char num_str[51];  // Maximum 50 digits + '\0'
    printf("Enter a number (up to 50 digits): ");
    scanf("%s", num_str);  // Read at most 50 characters

    int len = strlen(num_str);
    
    // Reverse the number
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = num_str[i];
        num_str[i] = num_str[j];
        num_str[j] = temp;
    }
    
    // Print the reversed number
    printf("Reversed number: %s\n", num_str);
    
    return 0;
}