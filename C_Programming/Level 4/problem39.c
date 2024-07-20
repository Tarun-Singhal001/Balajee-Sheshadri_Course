// Question: Get a integer and print the string value.
#include <stdio.h>

// Function to convert an integer to a string
void intToStr(int num, char* str)
{
    int i = 0;
    // Save the sign of the number
    int sign = num;

    // If the number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Extract digits from the number and add them to the string
    do {
        // Convert integer digit to character
        str[i++] = num % 10 + '0';
    }while(num /= 10);
    // If the number was negative, add a minus sign to the string
    if (sign < 0) {
        str[i++] = '-';
    }

    // Null-terminate the string
    str[i] = '\0';

    // Reverse the string to get the correct order
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }
}

int main()
{
    int num = -5432;
    char str[12];

    intToStr(num, str);

    printf("String: %s\n", str);

    return 0;
}