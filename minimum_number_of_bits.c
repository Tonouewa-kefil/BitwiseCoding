/*C program to get minimum number of bits to store an integer number*/
/*
    Example: 4  --> 100  --> 3
    Example: 10 --> 1010 --> 3
*/

#include <stdio.h>

int main()
{
    int input = 0;
    int num_of_bits = 0 ;
    printf("Enter a number: ");
    scanf("%d",&input);
    
    while(input > 1)
    {
        input = input >> 1; //This will go to the next bit in the binary sequence
        num_of_bits = num_of_bits + 1 ;
    }
    
    //If the input is either 0 or 1
    if(input ==0 || input == 1)
    {
        num_of_bits++;
    }
    
    printf("Number of bits needed: %d",num_of_bits);

    return 0;
}

