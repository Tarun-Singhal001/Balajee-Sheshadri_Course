// Question: Get a number from user and check whether the digits are in ascending order.
// Example: Input: 1234 Output: Yes. Input: 5687 Output: No
#include <stdio.h>
int check_ascending(int num){
    int temp = num;
    int prev_digit = temp % 10;
    temp /= 10;
    while(temp){
        int current_digit = temp % 10;
        if(current_digit > prev_digit){
            return 0;
        }
        prev_digit = current_digit;
        temp /= 10;
    }
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = check_ascending(num);
    if(result == 1){
        printf("Yes.");
    }
    else{
        printf("No.");
    }
    return 0;
}