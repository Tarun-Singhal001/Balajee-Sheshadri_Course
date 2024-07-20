// Question: Get 2 numbers from user and find the LCM of them.

// Example: Input 20,30 Output:60
#include <stdio.h>
    
int main() {
    int num1,num2;
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1,&num2);
    for(int i=1;i<=(num1*num2);i++){
        if(i%num1==0 && i%num2==0){
            printf("The LCM of %d and %d is: %d\n", num1, num2, i);
            break;
        }
    }
    return 0;
}