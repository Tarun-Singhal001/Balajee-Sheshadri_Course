// Write a program to multiply up to two 50 digit numbers.
#include <stdio.h>
int main(){
    long long int num1,num2;
    printf("Enter first number: ");
    scanf("%lld",&num1);
    printf("Enter Second number: ");
    scanf("%lld",&num2);
    long long int result = num1 * num2;
    printf("Product: %lld",result);
}