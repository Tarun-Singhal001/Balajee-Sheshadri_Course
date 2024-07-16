// Get a string and a character from the user and find all the positions
// where the character present and print it.

// E.g.: string : hellosurabee
// character : e
// Answer : 2, 11, 12

#include <stdio.h>
int main(){
    char string[100];
    char find;
    printf("Enter string: ");
    scanf("%s",string);
    printf("Enter character to find: ");
    scanf(" %c",&find);
    // printf("%c , %s", find, string);
    int length = 0;
    while(string[length]){
        length++;
    }
    for(int i=0;i<length;i++){
        if(string[i]==find){
            printf("%d, ", i+1);
        }
    }
    return 0;
}