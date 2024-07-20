// Question: Get a number from user and count the number of zeros in that number and print. Write your code inside the function. Do not Change the format.

// Example: Input: 100 Output: 2 . Input: 1060030 Output: 4.
#include <stdio.h>
int find_no_of_zeros(int num){
    int count = 0;
    while(num){
        if(num % 10 == 0){
            count++;
        }
        num = num / 10;
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = find_no_of_zeros(num);
    printf("Number of zeros: %d\n", result);

    return 0;
}