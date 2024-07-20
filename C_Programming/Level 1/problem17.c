// Question: Get a two-digit number from user and make the one’s digit as 0, then print it.
// Example: Input: 95 Output 90. Input: 18 Output: 10

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    num = (num/10)*10;
    printf("The number with the one's digit as 0 is: %d\n", num);
    return 0;
}