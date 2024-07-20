// Question: Write a program to get three numbers from user and print the LCM of those numbers.
#include <stdio.h>
    
int main() {
    int num1,num2,num3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calculate the LCM
    int count = 1;
    while(count){
        if(count % num1 == 0 && count % num2 == 0 && count % num3 == 0){
            printf("The LCM of %d, %d, and %d is: %d\n", num1, num2, num3, count);
            return 0;
        }
        count++;
    }
    return 0;
}