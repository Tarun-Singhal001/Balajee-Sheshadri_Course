// Question: Write a Calculator program that will give the "Calc" prompt and always stay on this prompt. When a user types one of the following commands, the program will calculate and give the result.
// Typing "Exit" will exit from the Calculator program. This program accepts up to 50-digit numbers. Then, the division will give the quotient and remainder.

// Calc> 12345678967354748+9876546877687678678678678 - Addition
// Calc> 12345678995387837883748798-8738478937937498237 - Subtraction
// Calc> 123478763783847239874 * 34837472384723894732 - Multiplication
// Calc> 1233489374983933498398095/3487384 - Division
// Calc> Exit - Quit.
// Note:
// Do not accept Invalid numbers.
// Do not print leading zeros.
// Use functions and write a professional program use Linux coding style.
// Each number can be of a different digit.
// Make sure that all the Input conditions are taken care.
// Try to minimize the execution speed.

#include <stdio.h>

// Function declarations
long long int add(long long int a, long long int b) {
    return a + b;
}

long long int subtract(long long int a, long long int b) {
    return a - b;
}

long long int multiply(long long int a, long long int b) {
    return a * b;
}

void divide(long long int a, long long int b, long long int *quotient, long long int *remainder) {
    *quotient = a / b;
    *remainder = a % b;
}

int main() {
    char input[100];
    long long int num1, num2, result, quotient, remainder;
    char operator;

    printf("Calculator Program\n");

    while (1) {
        printf("Calc> ");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%lld %c %lld", &num1, &operator, &num2) != 3) {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        switch (operator) {
            case '+':
                result = add(num1, num2);
                printf("Result: %lld\n", result);
                break;
            case '-':
                result = subtract(num1, num2);
                printf("Result: %lld\n", result);
                break;
            case '*':
                result = multiply(num1, num2);
                printf("Result: %lld\n", result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    divide(num1, num2, &quotient, &remainder);
                    printf("Quotient: %lld, Remainder: %lld\n", quotient, remainder);
                }
                break;
            case 'E':
                printf("Exiting Calculator Program.\n");
                return 0;
            default:
                printf("Invalid operator. Please try again.\n");
                break;
        }
    }

    return 0;
}
