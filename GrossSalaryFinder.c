#include <stdio.h>

void main() 
{
    //Take input
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    //Calculate da and hra
    da = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;

    //Print result
    printf("\nBasic Salary : %.2f", basic);
    printf("\nDA (40%%)     : %.2f", da);
    printf("\nHRA (20%%)    : %.2f", hra);
    printf("\nGross Salary : %.2f\n", gross);
}