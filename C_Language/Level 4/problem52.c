// Get a main string and sub string. Check the sub string in main string
// an print the position.

// E.g.: string : hellosurabee
// substring : sura
// Answer : 6

#include <stdio.h>

int main() {
    char str[100], sub[100];
    int i, j, count = 0, pos = 0;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == sub[0]) {
            int flag = 1;
            for (j = 1; sub[j] != '\0'; j++) {
                if (str[i + j] != sub[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                count++;
                pos = i;
            }
        }
    }

    if (count == 0) {
        printf("Substring not found in the main string.");
    } else {
        printf("Substring found at position: %d", pos+1);
    }

    return 0;
}