// Question: Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd then subtract 1 from the last digit and print the number.
// (Note: Last digit -MSB)
// Answer: Input : 123456 - Output – 023456
// Input : 96895439- Output – 86895439
// Input : 675 – Output - 675
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int multiplier = 1;
    while (num / multiplier >= 10) {
        multiplier *= 10;
    }
    if((num/multiplier)%2 == 0 ){
        printf("The number with last digit even: %d\n", num);
    }
    else{
        int result = num % multiplier+ (num/multiplier-1)*multiplier;
        printf("The number with last digit odd: %d\n", result);
    }
    return 0;
}