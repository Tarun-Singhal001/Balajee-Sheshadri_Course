// Question: Get a two-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
// Example: Input: 56 - Output Failure. Input: 37 - Output: Success.
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%10 + num/10 == 10){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}