// Question: Write a program to print the total number of TWO digit odd numbers till 100.
// Answer : 45
#include <stdio.h>
    
int main() {
    int count = 0;
    for(int i=10;i<100;i++){
        if(i%2) count++;
    }
    printf("%d",count);
    return 0;
}