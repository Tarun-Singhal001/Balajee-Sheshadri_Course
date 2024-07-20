// Get a string using gets function and count all the words in it.

// E.g.: string : Welcome to ECEN Academy
// Answer : 4
#include <stdio.h>

int count_words(char *str) {
    int count = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            count++;
        }
        i++;
    }
    count++;
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Warning: gets() is deprecated, consider using fgets() instead
    int words = count_words(str);
    printf("Number of words in the string: %d\n", words);
    return 0;
}
