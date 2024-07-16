// Question: Get a three-digit number from user and make the ten’s digit as 0 then print it.
// Example: Input: 695 Output 605. Input: 182 Output: 102

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = (num/100)*100 + num%10;
    printf("Result is: %d\n", new_num);
    return 0;
}