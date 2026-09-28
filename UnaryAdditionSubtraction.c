#include <stdio.h>

void main()
{
    int input,a,b;

    printf("\nEnter your number: ");
    scanf("%d", &input);

    a = input;
    b = input;

    printf("\nIncrement value: %d", ++a);
    printf("\nDecrement value: %d", --b);
}