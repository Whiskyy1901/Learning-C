#include <stdio.h>

void main() {
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.40 * basic;
    hra = 0.20 * basic;

    gross = basic + da + hra;

    printf("\nBasic Salary : %.2f", basic);
    printf("\nDA (40%%)     : %.2f", da);
    printf("\nHRA (20%%)    : %.2f", hra);
    printf("\nGross Salary : %.2f\n", gross);
}