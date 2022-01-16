#include <stdio.h>

int main()
{
    int num = 45;
    int bit = -1;
    if (num == 0)
        printf("No bit is set!");
    else
    {
        // As we keep left shifting the number, it is going to get to zero.
        while (num > 0)
        {
            bit++;
            num = num >> 1;
        }
        printf("The Highest bit set is bit %d", bit);
    }
    return 0;
}