// Question: Write a program to get a number from user and interchange the first and last digits and print the result.
// Answer: Input : 123456 - Output – 623451
// Input : 76895439- Output – 96895437
// Input : 675 – Output - 576
#include <stdio.h>
    
int main() {
    int num;
    int count = 0;
    int multiplier = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int new_num = num;
    while(num >0){
        num /= 10;
        count++;
        multiplier *= 10;
    }
    multiplier = multiplier/10;
    printf("%d\n", multiplier);
    printf("%d\n", count);
    int first_digit = new_num%10;
    int last_digit = new_num/multiplier;
    int result = first_digit * multiplier + (new_num/10*10) % multiplier + last_digit;
    printf("%d",result);
    return 0;
}