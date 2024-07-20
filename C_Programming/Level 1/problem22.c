// Question: Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.
// Example: Input: 685 Output 685. Input: 89172 Output: 89167

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = num - ((num%100)/10%2)*5;
    printf("Result is: %d\n", new_num);
    return 0;
}