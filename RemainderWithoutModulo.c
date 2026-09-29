#include <stdio.h>

void main()
{
    float num1,num2;
    float fdiv;
    int idiv;
    float remainder;

    //Take input
    printf("\nEnter number 1: ");
    scanf("%f", &num1);
    printf("\nEnter number 2: ");
    scanf("%f", &num2);

    //Calculate remainder
    fdiv = num1/num2;
    idiv = num1/num2;
    remainder = fdiv-idiv;

    //Print Result
    printf("\nRemainder: %f", remainder);
}