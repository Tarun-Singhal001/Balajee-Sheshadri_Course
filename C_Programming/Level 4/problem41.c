// Question: Get an integer and print each digit as character.
// Print one character on one line.
#include <stdio.h>
void int_to_char(int *num){
    char string[100];
    int i = 0;
    int temp = *num;
    if(temp<0){
        printf("-");
    }
    int multiplier = 1;
    while(temp/multiplier){
        multiplier *= 10;
        
    }
    multiplier /= 10;
    do{
        printf("%c", temp/multiplier + '0');
        temp %= multiplier;
        multiplier /= 10;
    }while(multiplier);
}
int main() {
    int num = 1234;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int_to_char(&num);
    return 0;
}