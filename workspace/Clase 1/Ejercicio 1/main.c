#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int promedio;
    int resultado;

    printf("Ingrese el primer numero\n");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numero2);
    printf("Ingrese el tercero numero\n");
    scanf("%d",&numero3);
    printf("Ingrese el cuarto numero\n");
    scanf("%d",&numero4);
    printf("Ingrese el quinto numero\n");
    scanf("%d",&numero5);

    promedio = numero1+numero2+numero3+numero4+numero5;
    resultado=promedio/5;

    printf("A continuacion se muestra el promedio de todos los numeros ingresados %d",resultado);
    return 0;
}
