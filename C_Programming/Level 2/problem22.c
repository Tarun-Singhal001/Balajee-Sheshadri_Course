// Question: Write a program get number from user print the total number of two-digit odd numbers in the number.
// Answer: Input: 12345678 - Output: 4
// Input: 987531 - Output: 4
#include <stdio.h>
    
int main() {
    int num;
    int count = 0;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    num = num/10;
    while(num){
        if(num%10%2){
            count++;
        }
        num = num/10;
    }
    printf("Total number of two-digit odd numbers: %d\n", count);
    return 0;
}