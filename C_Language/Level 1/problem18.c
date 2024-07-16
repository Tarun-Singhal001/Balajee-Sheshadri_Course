// Question: Get a two-digit number from user and make the ten’s digit 1, then print it.
// Example: Input: 95 Output 15. Input: 4182 Output: 12

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = ((num/100)*10 + 1)*10 + num%10;
    printf("Result is: %d",new_num);
    return 0;
}