#include <stdio.h>

void main() {
    //Sizeof returns number of bytes assigned
    //%zu is used for as format specifier for sizeof

    printf("Sizeof char: ");
    printf("%zu\n", sizeof(char));

    printf("Sizeof short int: ");
    printf("%zu\n", sizeof(short int));

    printf("Sizeof int: ");
    printf("%zu\n", sizeof(int));

    printf("Sizeof long int: ");
    printf("%zu\n", sizeof(long int));

    printf("Sizeof long long int: ");
    printf("%zu\n", sizeof(long long int));
    
    printf("Sizeof float: ");
    printf("%zu\n", sizeof(float));

    printf("Sizeof double: ");
    printf("%zu\n", sizeof(double));

    printf("Sizeof long double: ");
    printf("%zu\n", sizeof(long double));
}
