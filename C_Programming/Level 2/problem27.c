// Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.
#include <stdio.h>
    
int main() {
    int count = 0;
    for (int i = 1; i < 100000; i++) {
        int sum = 0;
        int num = i;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        if (sum == 14) {
            count++;
        }
    }
    printf("Total count of numbers less than 100000 with a sum of digits equal to 14: %d\n", count);
    return 0;
}