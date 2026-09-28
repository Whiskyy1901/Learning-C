#include <stdio.h>

void TakeInput(float *, float *, int);

void main(){
    float num1, num2;
    int i = 0;
    float result;
    do
    {
        printf("Select operation to perform: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Unary Addition \n 6. Unary Subtraction \n");
        printf("Press 7 to exit. \n");
        scanf("%d", &i);

        if (i == 7) {
            break;
        }
        if (i < 1 || i > 6) {
            printf("Invalid choice.\n");
            continue;
        }

        if(i < 5)
        {
            TakeInput(&num1, &num2, 1);
        }
        else if(i>= 5)
        {
            TakeInput(&num1, &num2, 0);
        }

        switch (i)
        {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1*num2;
                break;
            case 4:
                result = num1/num2;
                break;
            case 5:
                result = ++num1;
                break;
            case 6:
                result = --num1;
                break;
            default:
                break;
        }
        printf("Result = %.2f \n\n", result);
    } while (i != 7);
    
}

void TakeInput(float *num1, float *num2, int needSecondInput)
{
    printf("\nEnter the first number: ");
    scanf("%f", num1);
    if(needSecondInput)
    {
        printf("\nEnter the second number: ");
        scanf("%f", num2);
    }
}