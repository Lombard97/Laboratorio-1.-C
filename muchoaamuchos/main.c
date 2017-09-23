#include <stdio.h>
#include <stdlib.h>
#define TAMALUMNOS 10
#define TAMMATERIA 5
#define TAMINSCRIPCION 15

typedef struct{
    int legajo;
    char nombre[20];
}eAlumno;

typedef struct{
    int id;
    char descripcion[20];
}eMateria;

typedef struct{
    int legajo;
    int idMateria;
}eInscripcion;

void mostrarAlumnos(eAlumno[],int,eMateria[],int,eInscripcion[],int);

void cantidadAlumnos(eAlumno[],int,eMateria[],int);

int cantidadInscriptos(int,eInscripcion[],int);

int main()
{
    eAlumno Alumnos[]={{1, "Jose"}, {3, "Alberto"}, {4, "Juan"}, {7, "Luis"}, {10, "Ana"}, {9, "Silvia"}, {8, "Maria"}, {15, "Sofia"}, {18, "Martin"}, {11, "Dalia"}};
    eMateria Materias[]={{1, "Progamacion"}, {2, "Matematicas"},{3, "Quimica"}, {4, "Fisica"}, {5, "Electronica"}};
    eInscripcion Inscripciones[]={{1,2}, {1,3}, {2,2}, {2,4}, {2,5}, {3,1}, {4,1}, {1,1}, {8,3}, {9,3}, {10,2}, {10,5}, {10, 3}, {8, 1}, {1,2}};

    mostrarAlumnos(Alumnos,TAMALUMNOS,Materias,TAMMATERIA,Inscripciones,TAMINSCRIPCION);


    return 0;
}
void mostrarAlumnos(eAlumno alumnos[],int tamAlumno,eMateria materias[],int tamMateria,eInscripcion inscripto[],int tamInscripcion)
{

    for(int i=0;i<tamAlumno;i++)
    {
         printf("%s\n",alumnos[i].nombre);
            for(int j=0;j<tamInscripcion;j++)
            {
                if(alumnos[i].legajo==inscripto[j].legajo)
                {
                    for(int k=0;k<tamMateria;k++)
                    {
                        if(inscripto[j].idMateria==materias[k].id)
                        {
                            printf("%s\n",materias[k].descripcion);

                        }
                    }
                }
            }
        }
    }

void cantidadAlumnos(eAlumno alumnos[],int tamInscripcion,eMateria materias[],int tamMateria)
{
    int cantidad;

    for(int i;i<tamMateria;i++)
    {
        printf("%s",alumnos);
        for(int i;i<tamMateria;i++)
        {
            printf("%s",materias[i].descripcion);
            cantidad=cantidadInscriptos(tamMateria,materias[i].id,tamInscripcion);
            printf("%d\n\n",cantidad);
        }

    }
}

int cantidadInscriptos(int materias, eInscripcion inscripto[],int tamInscripcion)
{
    int cantidad=0
    for(int i=0;i<tamInscripcion;i++)
    {
        if(inscripto[i].idMateria==materia)
        {
            cantidad++;
        }
    }
}
