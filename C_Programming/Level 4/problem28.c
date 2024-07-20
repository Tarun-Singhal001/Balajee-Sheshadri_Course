// Question: Print the Smallest Four digit prime number

// Answer: 1009
#include <stdio.h>
    
int main() {
    for(int i=1000;i<10000;i++){
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