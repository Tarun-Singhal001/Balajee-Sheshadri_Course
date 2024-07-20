// Question: Print the largest Three digit prime number

// Answer: 997
#include <stdio.h>
    
int main() {
    for(int i=1000;i>=100;i--){
        int isprime = 1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            printf("%d ", i);
            return 0;
        }
    }
    return 0;
}