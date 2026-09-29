#include <stdio.h>

void ThirdVarSwitch(int num1,int num2)
{
    int third_variable;
    third_variable = num1;
    num1 = num2;
    num2 = third_variable;
    printf("\nSwitched numbers with third variable: %d %d", num1, num2);
}

void NoThirdVarSwitch(int num1,int num2)
{
    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nSwitched numbers without third variable: %d %d", num1, num2);
}

void XORSwitch(int num1, int num2)
{
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("\nSwitched numbers using XOR: %d %d", num1, num2);
}

void main()
{
    //Take input
    int num1,num2, third_variable;
    
    printf("\nEnter number 1: ");
    scanf("%d", &num1);
    printf("\nEnter number 2: ");
    scanf("%d", &num2);

    //Using third variable
    ThirdVarSwitch(num1, num2);
    //Whithout third variable
    NoThirdVarSwitch(num1, num2);
    //Using XOR variable
    XORSwitch(num1, num2);
}