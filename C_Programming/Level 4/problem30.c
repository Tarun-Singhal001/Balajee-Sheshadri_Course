// Question: Print the Largest eight-digit prime number

// Answer: 99999989
#include <stdio.h>
    
int main() {
    for(int i=99999999;i>=10000000;i--){
        int isprime = 1;
        for(int j=2;j*j<i;j++){
            if(i%j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            printf("%d",i);
            break;
        }
    }
    return 0;
}