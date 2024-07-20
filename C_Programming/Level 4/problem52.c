// Get a main string and sub string. Check the sub string in main string
// an print the position.

// E.g.: string : hellosurabee
// substring : sura
// Answer : 6

#include <stdio.h>
#include <string.h>

int find_substring(char *main_str, char *sub_str) {
    int main_len = strlen(main_str);
    int sub_len = strlen(sub_str);
    
    for (int i = 0; i <= main_len - sub_len; i++) {
        int j;
        for (j = 0; j < sub_len; j++) {
            if (main_str[i + j] != sub_str[j]) {
                break;
            }
        }
        if (j == sub_len) {
            return i + 1; // Return 1-based index
        }
    }
    
    return -1; // Return -1 if substring not found
}

int main() {
    char main_str[100], sub_str[100];
    
    printf("Enter the main string: ");
    scanf("%s", main_str);
    
    printf("Enter the substring to search for: ");
    scanf("%s", sub_str);
    
    int position = find_substring(main_str, sub_str);
    
    if (position != -1) {
        printf("Substring '%s' found at position %d in '%s'.\n", sub_str, position, main_str);
    } else {
        printf("Substring '%s' not found in '%s'.\n", sub_str, main_str);
    }
    
    return 0;
}
