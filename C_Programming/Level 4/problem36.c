// Question: Get a character and print its ASCII Value.

#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("ASCII value of %c is %d\n", character, character);

    return 0;
}