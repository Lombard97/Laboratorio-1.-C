#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

typedef struct
{
  int legajo;
  char nombre[50];
  int edad;
  float peso;
  char sintoma[50];
}ePaciente;

void mostrarPaciente(ePaciente);
void mostrarTodosLosPacientes(ePaciente[], int);
void cargarPacientes(ePaciente lista[], int);
codeoPacientes(ePaciente lista[], int);

int main()
{

    ePaciente listaPacientes[TAM];
    ePaciente paciente2;
    int i;

     cargarPacientes(listaPacientes, TAM);

   /* codeoPacientes(ePaciente lista, TAM);*/


    mostrarTodosLosPacientes(listaPacientes, TAM);




    return 0;
}

void mostrarTodosLosPacientes(ePaciente lista[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        mostrarPaciente(lista[i]);
    }

}

void mostrarPaciente(ePaciente paciente)
{
      printf("%d--%s--%d--%f--%s\n", paciente.legajo,paciente.nombre, paciente.edad, paciente.peso, paciente.sintoma);
}
/*
void cargarPacientes(lista[]int TAM)
{
    int i

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &listaPacientes[].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(listaPacientes[].nombre);

        printf("Ingrese edad: ");
        scanf("%d", &listaPacientes[].edad);

        printf("Ingrese peso: ");
        scanf("%f", &listaPacientes[].peso);

        printf("Ingrese sintoma: ");
        fflush(stdin);
        gets(listaPacientes[].sintoma);
    }
}*/
void cargarPacientes(ePaciente lista[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);

        printf("Ingrese edad: ");
        scanf("%d", &lista[i].edad);

        printf("Ingrese peso: ");
        scanf("%f", &lista[i].peso);

        printf("Ingrese sintoma: ");
        fflush(stdin);
        gets(lista[i].sintoma);
    }

}

/*codeoPacientes(ePaciente lista[i], int TAM)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("%d", &lista[i].legajo[123,150,14,56,45]);
    }
}*/


