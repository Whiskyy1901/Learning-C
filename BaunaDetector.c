#include <stdio.h>

void main()
{
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);

    if(height<0)
        printf("Invalid Height");
    else if(height > 167)
        printf("Tall");
    else
        printf("Short");
}