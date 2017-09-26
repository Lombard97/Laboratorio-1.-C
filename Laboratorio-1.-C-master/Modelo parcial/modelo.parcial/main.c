#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#define TAMABONADO 2

typedef struct
{
    int idAbonado;
    char nombre[20];
    char apellido[20];
    int telefono;
    int estado;
    char motivo[30];
}eAbonados;

void inicializador (eAbonados[],int);
int buscarLibre(eAbonados[],int);
void darAlta(eAbonados[],int);
int buscarAbonado(int,eAbonados[],int);
void mostrarAbonados(eAbonados[],int);
int main()
{
    eAbonados abonado[2];

    inicializador(abonado,2);

    int opcion;
    printf("1-Dar de alta un abonado\n2-Modificar datos de un abonado\n3-Dar de baja un abonado4-Nueva llamada\n5-Fin llamada\n6-Informar\n");
    scanf("%d",&opcion);
    do
    {
        switch(opcion)
        {
        case 1:
            system("cls");
            printf("Opcion 1\n");

            darAlta(abonado,2);
            break;

        }

    }while(opcion>0&&opcion<7);
}

void inicializador(eAbonados abonado[],int tamAbonado)
{
    tamAbonado = TAMABONADO;
    for(int i=0;i<tamAbonado;i++)
    {
        abonado[i].idAbonado=0;
    }
}
int buscarLibre(eAbonados abonado[],int tam)
{
    int indiceLibre=-1;
    for(int i=0;i<tam;i++)
    {
        if(abonado[i].estado==0)
        {
            indiceLibre=i;
            break;
        }
    }
}
void darAlta(eAbonados abonado[],int tam)
{
    int libre=buscarLibre(abonado,50);

    if(libre!=-1)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(abonado[libre].nombre);

        printf("ingrese apellido: ");
        fflush(stdin);
        gets(abonado[libre].apellido);

        printf("Ingrese numero telefonico");
        scanf("%d",&abonado[libre].telefono);

        abonado[libre].idAbonado++;

    }
}
int buscarAbonado(int id,eAbonados abonado[],int tam)
{
    int indice=-1;

    for(int i=0;i<tam;i++)
    {
        if(abonado[i].idAbonado==id)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void mostrarAbonados(eAbonados abonado[],int tamAbonado)
{
    int estado=1;
    for(int i=0;i<tamAbonado;i++)
    {
        if(abonado[i].estado==1)
        {
            mostrarAbonado(abonado[i]);

        }
    }
}
void mostrarAbonado(eAbonados abonado)
{

}

