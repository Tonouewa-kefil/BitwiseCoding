/*
    C program to reverse bits of a number.
    In this C program, we are going to learn how to reverse bits of a number? 
    Here, we have a number and printing its bits value in reverse order.
*/

#include <stdio.h>

int main()
{
    int input = 0;
    int temp = 0;
    int output = 0;
    printf("Enter a number: ");
    scanf("%d",&input);
    
    for(int i=0;i<8;i++)
    {
        temp = input & (1<<i);
        if(temp != 0)
            printf("1");
            //output = output |(1 >> )
        else
            printf("0");
        
    }
    
    
    return 0;
}
