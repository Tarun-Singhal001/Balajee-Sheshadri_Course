// Question: Write a loop program to print the sum of two-digit numbers whose one’s digit is 5.

// Answer: 495
#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i = 10;i<100;i++){
        if(i%10 == 5){
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}