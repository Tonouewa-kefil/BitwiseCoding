/*
    C program to swap two nibbles of a byte.
*/

#include <stdio.h>

int main()
{
    int num = 100;
    printf("Before Swapping: %x\n", num);
    // Left shift num four times to get the lower nibble into the upper one
    // Mask the lower nible (1)
    // Right shift num four times to get the upper nibble into the lower one
    // Mask the upper nible (2)
    // Perform (1) OR (2)

    num = (num << 4) & 0xf0 | (num >> 4) & 0x0f;

    printf("After Swapping: %x", num);
    return 0;
}