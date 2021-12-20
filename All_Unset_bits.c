/*
    C program to check whether all bits of a number are UNSET/LOW?
*/

#include <stdio.h>

int main()
{
    int input = 0;
    printf("Enter a number: ");
    scanf("%d",&input);
    
    int input_size = sizeof(input);
    int max_int = 0;
    
    //First let build the max value that we can get with a 4 bytes integer
    while(input_size != 0)
    {
        max_int = (max_int << 8) | 255;
        input_size = input_size - 1;
    }
    
    //Check the result of input & 0*FFFF FFFF
    if(input & max_int == 0)
    {
        printf("All the bits are UNSET \n");
    }
    else
    {
        printf("Some bits are SET \n");
    }
    return 0;
}
