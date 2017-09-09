#include <stdio.h>
#include <stdlib.h>
void ingresanumero(int);
void calcularea(int);

int main()
{
   ingresanumero(int numero);

   calcularea(int numero);
}

ingresanumero(int numero)
{
    printf(Ingresa numero);
    scanf("%d",numero);
    return numero;
}
calcularea(int numero)
{
    numero = 3,14*area*area;
    printf("el area del numero es %d",numero);
}
