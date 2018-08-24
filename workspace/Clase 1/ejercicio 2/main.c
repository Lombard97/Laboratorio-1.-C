#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese los numeros que desea sumar\n");
    scanf("%i",&num1);
    printf("Ingrese el otro numero\n");
    scanf("%i",&num2);

    resultado=num1+num2;

    printf("El resultado es %i",resultado);

    return 0;
}
