#include <stdio.h>

void main() 
{
    //Take input
    double km, meters, centimeters, feet, inches;

    printf("Enter distance between two cities (in kilometers): ");
    scanf("%lf", &km);

    //Convert
    meters = km * 1000;
    centimeters = km * 100000;
    feet = km * 3280.84;
    inches = km * 39370.1;

    //Print result
    printf("\nDistance in different units:\n");
    printf("Meters      = %.2f m\n", meters);
    printf("Centimeters = %.2f cm\n", centimeters);
    printf("Feet        = %.2f ft\n", feet);
    printf("Inches      = %.2f in\n", inches);
}