// Question: Get a three-digit number from user and print the reverse of the number.
// Example: Input: 561 Output 165. Input: 859 Output: 958

#include <stdio.h>
void reverse(int *num){
    int new_num = *num;
    int ans = 0;
    while (new_num!= 0) {
        int rem = new_num % 10;
        ans = ans * 10 + rem;
        new_num /= 10;
    }
    *num = ans;  // Update the original number with the reversed value
}
int main() {
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    reverse(&num);
    printf("Reverse of number is: %d",num);
    return 0;
}