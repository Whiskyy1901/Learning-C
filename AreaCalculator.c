#include <stdio.h>

void Cube(void);
void Trapezium(void);
void Rhombus(void);
void Paralellogram(void);

void main()
{
    int i;
    do
    {
        printf("\nSelect area to calculate: \n 1. Cube \n 2. Trapezium \n 3. Rhombus \n 4. Paralellogram");
        printf("\nPress 5 to exit.\n");
        scanf("%d", &i);

        if(i == 5){
            return;
        }
        else if(i<1 || i>4){
            printf("\nPlease select a valid option.");
            continue;
        }

        switch (i)
        {
            case 1:
                Cube();
                break;
            case 2:
                Trapezium();
                break;
            case 3:
                Rhombus();
                break;
            case 4:
                Paralellogram();
                break;
            default:
                break;
        }

    } while (i<5);
    
}

void Cube()
{
    float sidelength, area;
    printf("\nEnter side length of cube: ");
    scanf("%f", &sidelength);

    area = 6*sidelength*sidelength;

    printf("\nCalculated area is: %.2f\n",area);
}

void Trapezium()
{
    float parallel1, parallel2, height, area;
    printf("\nEnter parallel side length: ");
    scanf("%f", &parallel1);
    printf("\nEnter other parallel side length: ");
    scanf("%f", &parallel2);
    printf("\nEnter height: ");
    scanf("%f", &height);

    area = 0.5*(parallel1+parallel2)*height;

    printf("\nCalculated area is: %.2f\n",area);
}

void Rhombus()
{
    float diag1, diag2, area;
    printf("\nEnter diagonal length: ");
    scanf("%f", &diag1);
    printf("\nEnter other diagonal length: ");
    scanf("%f", &diag2);

    area = 0.5*diag1*diag2;

    printf("\nCalculated area is: %.2f\n",area);
}

void Paralellogram()
{
    float base, height, area;
    printf("\nEnter base length: ");
    scanf("%f", &base);
    printf("\nEnter height: ");
    scanf("%f", &height);

    area = base*height;

    printf("\nCalculated area is: %.2f\n",area);
}