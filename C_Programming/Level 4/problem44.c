// Question: Get a string of numbers up to 50 digits and remove all leading zeros.

// E.g.: 00000012345
// Answer: 12345
#include <stdio.h>
    
int main() {
    char num[50];
    char new_num[50];
    printf("Enter a string of numbers up to 50 digits: ");
    scanf("%s", num);
    int i = 0;
    int j = 0;
    while(num[i] != '\0') {
        if(num[i] == '0'){
            i++;
        }
        else{
            new_num[j] = num[i];
            i++;
            j++;
        }
    }
    printf("%s", new_num);
    return 0;
}