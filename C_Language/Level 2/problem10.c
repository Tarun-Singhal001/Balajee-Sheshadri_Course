// Question: Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.

// Answer: 375
#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i=1;i<100;i+= 2){
        if(i/10 == 7){
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}