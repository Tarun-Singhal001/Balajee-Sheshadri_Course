// Question: Write a loop program to print the two-digit odd numbers, who’s sum of

// digits are 7.

// Answer: 25
// 43
// 61
#include <stdio.h>
    
int main() {
    for(int i=10;i<=99;i++){
        if(i%2 ==1 && i/10 + i%10 == 7){
            printf("%d\n", i);
        }
    }
    return 0;
}