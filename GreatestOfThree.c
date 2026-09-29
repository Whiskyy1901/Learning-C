#include <stdio.h>

void main()
{
    //Take input
    int num1, num2, num3, max;
    printf("\nEnter the numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //Find max
    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
 
    //Print result
    printf("\nGreatest number is: %d", max);
}