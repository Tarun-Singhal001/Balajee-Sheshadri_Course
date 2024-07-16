// Question: Get a three-digit number from user and make the one’s digit as 2 then print it.
// Example: Input: 695 Output 692. Input: 182 Output: 182

#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int new_num = (num/10)*10 + 2;
    printf("Result is: %d\n", new_num);
    return 0;
}