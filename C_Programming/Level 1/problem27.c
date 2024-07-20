// Question: Get a three-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
// Example: Input: 956 - Output Failure. Input: 127 - Output: Success.
#include <stdio.h>
    
int main() {
    int num;
    printf(" Enter a three digit number: ");
    scanf("%d", &num);
    if(num%10 + (num/10)%10 + num/100 == 10){
        printf("Success\n");
    }
    else printf("Failure\n");
    return 0;
}