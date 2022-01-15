/*
    C program to counter number of 1's in an integer number.
*/

#include <stdio.h>

int main()
{
    int num = 10;
    int ones = 0;
    while (num > 0)
    {
        num = num & (num--);
        ones++;
    }

    printf("Number of ones in the integer: %d", ones);
    return 0;
}