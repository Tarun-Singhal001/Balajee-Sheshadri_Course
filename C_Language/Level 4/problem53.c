// Get a string using gets function and count all the words in it.

// E.g.: string : Welcome to ECEN Academy
// Answer : 4

#include<stdio.h>
// #include<string.h>
int main(){
    char str[100];
    int count = 0, i = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0'){
        if(str[i] == ' '){
            count++;
        }
        i++;
    }
    printf("Number of words: %d", count+1);
    return 0;
}