// Question: Print the total number of non-decreasing numbers from 1000 to 9999.Non decreasing numbers have individual digits that do not have a decreasing order from left to right.
// (For e.g.: 1234 is a non-decreasing number where as 2134 is not)
#include <stdio.h>
int countNonDecreasingNumbers()
{
    int count = 0;

    for (int num = 1000; num <= 9999; num++)
    {
        int current = num;
        int prev_digit = current % 10;
        current /= 10;
        int next_digit;
        int isNonDecreasing = 1;

        while (current > 0 && isNonDecreasing)
        {
            next_digit = current % 10;
            if (next_digit > prev_digit)
            {
                isNonDecreasing = 0;
            }
            prev_digit = next_digit;
            current /= 10;
        }

        if (isNonDecreasing)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int total = countNonDecreasingNumbers();

    printf("Total number of non-decreasing numbers from 1000 to 9999: %d\n", total);

    return 0;
}
