#include <stdio.h>

void main()
{
    //Take input
    int input,a,b;

    printf("\nEnter your number: ");
    scanf("%d", &input);

    a = input;
    b = input;

    //Increment and Decrement
    printf("\nIncrement value: %d", ++a);
    printf("\nDecrement value: %d", --b);
}