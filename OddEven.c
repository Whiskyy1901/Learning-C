#include <stdio.h>

void main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    if (number%2 == 0)
    {
       printf("Number is even");
    } 
    else
    {
        printf("Number is odd.");
    }
    
}