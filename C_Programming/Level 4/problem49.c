// Question: Convert an integer array of up to 50 digits to character array and print using “printf(“%s”, ....);”
// E.g.: Array – 1 4 5 8 7 6 3
// Answer: 1458763
#include <stdio.h>
    
int main() {
    int arr[50];
    char char_arr[50];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        printf("Enter %d value: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<size; i++){
        char_arr[i] = arr[i]+'0';
    }
    for(int i=0;i<size;i++){
        printf("%c",char_arr[i]);
    }
    return 0;
}