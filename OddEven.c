#include <stdio.h>

void main()
{
    //Take input
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    //Find odd/even
    if (number%2 == 0)
    {
       printf("Number is even");
    } 
    else
    {
        printf("Number is odd.");
    }
    
}