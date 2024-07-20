// Question: Adjust the carry in an integer array. (i.e. convert the 2 digit number into single digit and add the carry to the next number)
// E.g.: Array - 6 12 3 15 7
// Answer: 7 2 4 5 7

#include <stdio.h>

void adjust_array(int arr[], int *size) {
    int carry = 0;
    
    for (int i = *size - 1; i >= 0; i--) {
        int current = arr[i] + carry;
        
        if (current > 9) {
            arr[i] = current % 10;
            carry = current / 10;
        } else {
            arr[i] = current;
            carry = 0;
        }
    }
}

int main() {
    int arr[] = {6, 12, 3, 15, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    adjust_array(arr, &size);    
    printf("Adjusted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
