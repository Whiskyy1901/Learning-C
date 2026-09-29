#include <stdio.h>

void main()
{
    //Take numbers
    int a,b, gcd;
    printf("\nEnter both numbers: ");
    scanf("%d %d", &a, &b);

    //Find GCD by division
    for(int i= 1; i<=a && i<=b; i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            gcd = i;
        }
    }

    printf("GDC is: %d", gcd);
}
