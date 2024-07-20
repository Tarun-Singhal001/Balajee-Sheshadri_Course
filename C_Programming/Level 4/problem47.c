// Question: Add two integer arrays of up to 50 digits and store the result in a 51 digits array.
#include <stdio.h>
#include <string.h>

void add_arrays(char array1[], char array2[], char result[])
{
    int len1 = strlen(array1);
    int len2 = strlen(array2);
    strrev(array1);
    strrev(array2);
    int carry = 0;
    int max_len = len1 > len2 ? len1 : len2;
    for (int i = 0; i < max_len; ++i){
        int digit1 = (i < len1) ? (array1[i] - '0') : 0;
        int digit2 = (i < len2) ? (array2[i] - '0') : 0;

        int sum = digit1 + digit2 + carry;

        result[i] = sum % 10 + '0';
        carry = sum / 10;
    }

    if (carry > 0){
        result[max_len] = carry + '0';
        result[max_len + 1] = '\0';
    }
    else{
        result[max_len] = '\0';
    }
    strrev(result);
}

int main(){
    char array1[51], array2[51], result[52];

    printf("Enter first integer array (up to 50 digits): ");
    scanf("%s", array1);

    printf("Enter second integer array (up to 50 digits): ");
    scanf("%s", array2);

    add_arrays(array1, array2, result);

    printf("Sum of the arrays: %s\n", result);

    return 0;
}
