#include <stdio.h>

void main()
{
    //Take input
    int n,r;
    long int value = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);   
    printf("Enter value of r: ");
    scanf("%d", &r);

    //Check  validity of n and r
    if(n>0 && n>=r && r>=0)
    {
        //Calculate value of nPr
        if (r==0)
        {
            printf("Value of nPr: %d", n);
            return;
        }
        else
        {
            for(int i = 0; i < r; i++)
            {
                value *= (n-i);
            }
            printf("Value of nPr: %ld", value);
        }
    }
    else
    {
        printf("Enter valid values of n and r");
    }
}