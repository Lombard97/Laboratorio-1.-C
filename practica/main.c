#include <stdio.h>
#include <stdlib.h>
void modificar(int*);

int main()
{
    int v=10;
    int* p;
    int y=0;
    modificar(&y);
    p=&v;

    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%d",y);

}

void modificar(int* x)
{
    (*x)++;
    if("%d",*x/2==0)
    {
        printf("\nEs par %d",*x);
    }
    else
    {
        printf("\nEs impar %d",*x);
    }
}
