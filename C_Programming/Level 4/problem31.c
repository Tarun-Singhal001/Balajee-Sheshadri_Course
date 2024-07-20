// Question: Print the number of zeroes you encounter between the numbers 0 to 1000
#include <stdio.h>

int countZeroes(int n)
{
    int count = 1;

    // Count zeroes in the units place
    for (int i = 1; i <= n; i++)
    {
        if (i % 10 == 0)
            count++;
    }

    // Count zeroes in the tens place
    for (int i = 10; i <= n; i++)
    {
        if ((i / 10) % 10 == 0)
            count++;
    }

    // Count zeroes in the hundreds place
    for (int i = 100; i <= n; i++)
    {
        if ((i / 100) % 10 == 0)
            count++;
    }

    return count;
}

int main()
{
    int n = 1000;
    int numZeroes = countZeroes(n);

    printf("Number of zeroes encountered from 0 to %d: %d\n", n, numZeroes);
    return 0;
}