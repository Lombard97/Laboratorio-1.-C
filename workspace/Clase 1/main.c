#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    float num2;
    char caracter = 'a';

    printf("Ingrese un numero\n");
    scanf("%i",&num1);

    printf("Ingrese un numero real\n");
    scanf("%f",&num2);

    fflush(stdin);

    printf("Ingrese un caracter\n");
    scanf("%c",&caracter);

    printf("El numero entero es: %i\n",num1);
    printf("El numero real es: %.2f\n",num2);
    printf("El caracter ingresado es: %c\n",caracter);
    return 0;
}
