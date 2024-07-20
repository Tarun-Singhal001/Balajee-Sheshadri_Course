// Question: Print the Largest Four digit prime number

// Answer: 9973
#include <stdio.h>
    
int main() {
    for(int i=9999;i>=1000;i--){
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