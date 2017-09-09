#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int codigo[5];
    char descripcion[5][20];
    float precio[5];
    int stock[5];
    int opcion;
    char aux[20];
    int tam;
    do
    {
        printf("1-Alta del producto\n2-Mostrar producto\n3-Ordenar por descripcion\n");
        printf("Ingrese el numero acorde a la opcion que desea realizar\n");
        scanf("%d", &opcion);
    }
    while(opcion==0||opcion>3);


    switch(opcion)
    {
        case 1:
            for(int i=0;i<3;i++)
            {
                printf("ingrese codigo de producto\n");
                scanf("%d",&codigo[i]);

                printf("Ingrese descripcion del producto\n");
                fflush(stdin);
                gets(descripcion[i]);

                printf("ingrese precio del producto\n");
                scanf("%f",&precio[i]);

                printf("Ingrese el stock del producto\n");
                scanf("%d",&stock[i]);

                break;
            }
        case 2:
            for(int i=0;i<3;i++)
            {
                printf("%d\n",codigo[i]);
                printf("%s\n",descripcion[i]);
                printf("%.2f\n",precio[i]);
                printf("%d\n",stock[i]);
                break;
            }
        case 3:

    for(int i=0; i< tam-1; i++)
    {
        for(int j= i+1; j<tam; j++)
        {
            if(strcmp(descripcion[i], descripcion[j])>0)
            {
                strcpy(aux, descripcion[i]);
                strcpy(descripcion[i], descripcion[j]);
                strcpy(descripcion[j], aux);
            }
        }
    }
    break;
}
}



