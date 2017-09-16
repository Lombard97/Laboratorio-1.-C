#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int tam=5;


typedef struct
{
    int id;
    char nombre[20];
    char categoria;
    int proyecto;
    int estado;
    int lista[50];
}
eProgramador;

//a = Senior
//b = SemiSenior
//c = Junior

int menu();

void inicializar(eProgramador lista[], int);

void mostrarprogramadores(eProgramador lista[],int);
void mostrarProgramador(eProgramador lista[]);

int main()
{
    int salir = 1;
    do{
        switch(menu()){

    case 1:
        system("cls");
        printf("Opcion1");
        getch();

        break;

    case 2:
         system("cls");
        printf("Opcion2");
        getch();


        break;
    case 3:
         system("cls");
        printf("Opcion3");
        getch();

        break;

    case 4:
         system("cls");
        printf("Opcion4");
        getch();
        break;



    case 5:
      salir = 0;



        break;

        }

    }while(salir);
    return 0;
}


    int menu(){
        int opcion;
        system("cls");
        printf("\n***Programadores***\n\n\n");
        printf("1- Alta Programador\n");
        printf("2- Modificacion Programador\n");
        printf("3- Baja Programador\n");
        printf("4- Listado Programadores\n");
        printf("5- Salir\n");
        printf("\n\nIngrese opcion: ");
        scanf("%d", &opcion);

        return opcion;

    }

void inicializar(eProgramador lista[], int tam)
{
    for(int i=0;i<tam;i++)
    {
         lista[i].estado=0;
    }
}

void(mostrarprogramadores(eProgramador lista[],int tam))
{
    int flag=0;

    for(int i=0;i<tam;i++)
    {
        if(lista[i].estado==1)
        {
            mostrarProgramador(lista[i]);
            flag=1;
        }
        if(flag==0)
        {
            printf("No hay programadores que mostrar");
        }
    }
}
