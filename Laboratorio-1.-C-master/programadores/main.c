#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 2
#define TAMID 0

typedef struct
{
    int id[20];
    char nombre[20];
    char categoria[20];
    int proyecto;
    int estado;
}
eProgramador;

void inicializar(eProgramador[], int);
void darAlta(eProgramador[], int);
void modificarProgramador(eProgramador[],int);
void mostrarProgramador(eProgramador[],int);

//a = Senior
//b = SemiSenior
//c = Junior

int menu();



/*void mostrarprogramadores(eProgramador[],int);
void mostrarProgramador(eProgramador, int);*/

int main()
{
    eProgramador lista[TAM];
     inicializar(lista,TAM);

    int salir = 1;
    do{
        switch(menu()){

    case 1:
        system("cls");

        darAlta(lista,TAM);
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
        mostrarProgramador(lista,TAMID);
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

void darAlta(eProgramador lista[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        if(lista[i].estado==0)
        {
            printf("Ingrese ID\n");
            scanf("%d",lista[i].id);

            printf("Ingrese nombre\n");
            fflush(stdin);
            gets(lista[i].nombre);

            printf("ingrese proyecto\n");
            scanf("%d",&lista[i].proyecto);

            printf("Ingrese categoria c para junior b para semisenior y c para senior\n");
            fflush(stdin);
            gets(lista[i].categoria);



        }
        else
        {
            printf("No hay lugar en el sistema");
        }
    }
}
/*void modificarProgramador(eProgramador lista[],int tam)
{
    int indice;

    printf("Ingrese el ")
}*/
void mostrarProgramador(eProgramador lista[], int tam)
{
    int auxId;
    printf("Ingrese el id del programador que desea mostrar");
    scanf("%d",&auxId);

    for(int i=0;i<tam;i++)
    {
            if(auxId==lista[i].id)
            {
                printf("%d",lista[i].id,"%c",lista[i].nombre,"%c",lista[i].categoria,"%d",lista[i].proyecto);

            }
    }
}
