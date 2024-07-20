// Question: Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.

// Answer: 24
// 42
// 60
#include <stdio.h>
    
int main() {
    for(int i=10;i<=98;i += 2){
        if(i/10 + i%10 == 6) printf("%d\n",i);
    }
    return 0;
}