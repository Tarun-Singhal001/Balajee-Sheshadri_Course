// Question: write a program to print the total number of THREE digit odd numbers
// Answer : 450
#include <stdio.h>
    
int main() {
    int count = 0;
    for(int i = 100;i<=999;i+= 2){
        count++;
    }
    printf("%d ",count);
    return 0;
}