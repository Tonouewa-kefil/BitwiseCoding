/*
    C program to check a given number is the power of 2 using bitwise operator
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 1;
    int isPow2 = 1;
    if (num == 1)
        isPow2 = 1;
    else
    {
        while (num > 2)
        {
            if (num & 1 == 1)
            {
                isPow2 = 0;
            }
            num = num >> 1;
        }
    }

    printf("Power of 2: %d", isPow2);
    return 0;
}