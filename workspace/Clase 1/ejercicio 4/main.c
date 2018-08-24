#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num1;
    int num2;
    int resta;

    printf("Este programa resta los numeros ingresados en el orden determinado y verifica si son negativos o positivos\n");

    printf("Ingrese un numero\n");
    scanf("%i",&num1);
    printf("Ingrese otro numero\n");
    scanf("%i",&num2);
    resta=num1-num2;

    if(resta<0)
    {
        printf("El resultado es negativo, y su valor es: %i",resta);
    }
    else
    {
        printf("El resultado es positivo y su valor es: %i",resta);
    }
}
