#include <stdio.h>

void main()
{
    //Take input
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);

    //Calculate result
    if(height<0)
        printf("Invalid Height");
    else if(height > 167)
        printf("Tall");
    else
        printf("Short");
}