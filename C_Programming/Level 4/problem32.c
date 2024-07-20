// Question: Total number of prime numbers below 1,000,000 have the sum of their digits equal to 14?
// Example: 59. 5 + 9 = 14
#include <stdio.h>
    
int main() {
    int count =0;
    for(int i=59;i<1000000;i++){
        int isprime = 1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            int num = i;
            int sum = 0;
            while(num){
                int digit = num%10;
                sum += digit;
                num /=10;
            }
            if(sum == 14) count++;
        }
    }
    printf("Total number of prime numbers below 1,000,000 have the sum: %d",count);
    return 0;
}