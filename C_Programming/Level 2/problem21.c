// Question: Write a program get number from user print the total number digits which are odd in the number.
// Answer: Input : 12345678 - Output : 4
// Input : 987531 - Output : 5
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int count = 0;
    while (num!= 0) {
        int digit = num % 10;
        if (digit % 2) {
            count++;
        }
        num /= 10;
    }
    
    printf("Total number of odd digits: %d\n", count);

    return 0;
}