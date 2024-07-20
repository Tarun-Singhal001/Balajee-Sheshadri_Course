// Question: Get a number string up to 50 digits and convert it to integer array.
#include <stdio.h>
#include<string.h>
int main() {
    char num_str[51];  
    int num_array[51]; 
    int len = 0;
    
    printf("Enter a number: ");
    fgets(num_str, sizeof(num_str), stdin); 

    // Remove newline character
    if (num_str[strlen(num_str) - 1] == '\n') {
        num_str[strlen(num_str) - 1] = '\0';
    }

    // Convert each character to integer and store in array
    for (int i = 0; num_str[i] != '\0'; i++) {
        num_array[i] = num_str[i] - '0'; // Convert char to int
        len++;
    }
    
    // Print the integer array
    printf("Integer array representation:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", num_array[i]);
    }
    printf("\n");
    
    return 0;
}
