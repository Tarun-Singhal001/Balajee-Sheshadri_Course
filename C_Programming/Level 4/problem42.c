// Question: Get a string and find the length of the string
#include <stdio.h>
    
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = 0;
    while (str[length]!= '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}