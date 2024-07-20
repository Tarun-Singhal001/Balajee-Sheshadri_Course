// Question: Get a four-digit number from user and subtract 5 from that number if ten’s digit position and 100’s digit position is same, then print the result Do not use “if”.
// Example: Input: 7595 Output 7595. Input: 3772 Output: 3767
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a four digit number: ");
    scanf("%d",&num);
    int new_num = num - ((num/100)%10 == (num/10)%10)*5;
    printf("Result is: %d\n", new_num);
    return 0;
}
