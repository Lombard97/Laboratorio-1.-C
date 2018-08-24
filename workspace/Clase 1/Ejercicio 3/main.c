#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;
    int num2;
    int producto;
    int cuadrado;
    system("cls");

    printf("Ingrese 2 numeros \n(No se permiten ceros)\n");
    scanf("%d",&num1);

    while(num1 == 0)
    {
        printf("El numero ingresado no esta permitido reingrese\n");
        scanf("%d",&num1);
    }
    printf("Ingrese el segundo numero\n");
    scanf("%i",&num2);

    producto = num1*num2;
    cuadrado = num1*num1;

    printf("El producto de los valores es %i\n",producto);
    printf("El cuadrado del primer numero ingresado es: %i",cuadrado);
}
