// Question: Get a String and print the same.
#include <stdio.h>
    
int main() {
    char str[100];
    printf("Enter a string: \n");
    scanf("%[^\n]",&str);
    printf("The entered string is: %s\n", str);
    return 0;
}