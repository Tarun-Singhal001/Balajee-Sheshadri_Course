// Question: Write a loop program to print sum of 1 to 5.
// Answer: 15
#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i=1;i<=5;i++){
        sum += i;
    }
    printf("Sum of 5 numbers is: %d\n",sum);
    return 0;
}