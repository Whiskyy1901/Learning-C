#include <stdio.h>
#include <math.h>

void main()
{
    float input;
    float normalCube;
    float mathCube;

    printf("\nEnter your number: ");
    scanf("%f", &input);

    normalCube = input*input*input;
    mathCube = pow(input, 3);

    printf("\nNormal cube = %.2f", normalCube);
    printf("\nMath cube = %.2f", mathCube);
}