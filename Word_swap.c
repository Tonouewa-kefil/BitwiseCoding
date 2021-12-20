/*
    C program to swap two words/bytes.
    (for example convert 0x1234 to 0x3412).
*/

#include <stdio.h>

int main()
{
    int input = 0x1234;
    printf("Input: %x\n",input);
    
    int aux_input = input;//Copy the input into an auxiliary variable
    input =  input << 8; //left shift the input 8 times to get the last word into the first word position
    aux_input = aux_input >> 8;//Right shift the auxiliary input 8 times to get the first word into the last work position
    //Or the two result to construct the Output and discard any extra bytes created by the shifting operations
    input = (input | aux_input) & 0xFFFF;
    
    printf("Output: %x",input);
    return 0;
}
