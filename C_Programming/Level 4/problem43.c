// Question: Get a String of numbers up to 50 digits and validate the number.

// E.g.: 1234567 → valid number
// 12abc35 → Not a valid number
#include <stdio.h>
    
int main() {
    char num[50];
    printf("Enter a string of numbers up to 50 digits: ");
    fgets(num,50,stdin);

    int isValid = 1;
    int i= 0;
    while(num[i] != '\n'){
        if (num[i] < '0' || num[i] > '9') {
            isValid = 0;
            break;
        }
        i++;
    }
    // 01234  0 1 
    if (isValid) {
        printf("%s is a valid number.\n", num);
    } else {
        printf("%s is not a valid number.\n", num);
    }
    return 0;
}