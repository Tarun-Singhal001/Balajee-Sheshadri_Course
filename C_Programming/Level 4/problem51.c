// Get a string and a character from the user and find all the positions where the character present and print it.

// E.g.: string : hellosurabee
// character : e
// Answer : 2, 11, 12
#include <stdio.h>

void find_positions(char *str, char ch) {
    int positions[50];
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            positions[count++] = i + 1;
        }
    }
    
    printf("Positions of '%c' in '%s': ", ch, str);
    for (int i = 0; i < count; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", positions[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    scanf("%s", str);
    getchar();
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    find_positions(str, ch);
    
    return 0;
}
