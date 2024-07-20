// Question: Print the total number of all Palindrome numbers less than 100000.

// Example: 101,12321,656,99899,11511
#include <stdio.h>
int palindrome_count(void){
    int count = 0;
    for(int i=0;i<100000;i++){
        int temp = i;
        int rev = 0;
        while(temp!= 0){
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }
        if(i == rev){
            count++;
        }
    }
    return count;
}
int main() {
    int total = palindrome_count();
    printf("Total number of Palindrome: %d", total);
    return 0;
}