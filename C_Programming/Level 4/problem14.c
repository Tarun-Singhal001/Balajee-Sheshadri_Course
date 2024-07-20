// Question: Write a program to print the total number of single digit odd numbers
// Answer - 5
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0;
    while(num){
        if(num % 10%2 == 1){
            count++;
        }
        num /= 10;
    }
    printf("Total number of single digit odd numbers: %d", count);
    return 0;
}