// Question: Write a program to get two numbers from user and print the LCM of those numbers.
#include <stdio.h>
    
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int count;
    if(num1>num2){
        count = num1;
    }
    else{
        count = num2;
    }
    while(count){
        if(count%num1 ==0 && count%num2 ==0){
            printf("The LCM of %d and %d is: %d\n", num1, num2, count);
            return 0;
        }
        count++;
    }
    return 0;
}