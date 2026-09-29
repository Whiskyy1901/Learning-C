#include <stdio.h>
#include <math.h>

void main()
{
    //Take input
    float input;
    float normalCube;
    float mathCube;

    printf("\nEnter your number: ");
    scanf("%f", &input);

    //Normal cube
    normalCube = input*input*input;
    //Using pow
    mathCube = pow(input, 3);

    //Print result
    printf("\nNormal cube = %.2f", normalCube);
    printf("\nMath cube = %.2f", mathCube);
}