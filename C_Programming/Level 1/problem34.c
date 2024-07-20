// Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s digit
// Example: Input: 856 978 – Output: 1
// Input: 128 365 - Output: 2

#include <stdio.h>
    
int main() {
    int num1,num2;
    
    printf("Enter two 3-digit numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1/10%10 > num2/10%10){
        if(num1%10 - num1/100 >= 0){
            printf("Difference: %d\n", num1%10 - num1/100);
        }
        else printf("Difference: %d\n", -num1%10 + num1/100);
    }
    else{
        if(num2%10 - num2/100 >= 0){
            printf("Difference: %d\n", num2%10 - num2/100);
        }
        else printf("Difference: %d\n", -num2%10 + num2/100);
    }
    return 0;
}