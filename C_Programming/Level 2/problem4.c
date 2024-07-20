// Question: Write a loop program to print sum of 6 to 1.
// Answer: 21

#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i=6;i>=1;i--){
        sum += i;
    }
    printf("Sum till 6 is: %d\n",sum);
    return 0;
}