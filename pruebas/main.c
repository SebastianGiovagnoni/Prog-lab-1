#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>

int main()
{
    int i;
    int suma=0;
    //int min=INT_MIN;
    //int max=INT_MAX;

    for(i=0; i<10; i++)
    {
        int aux;
        printf("ingrese un numero: ");
        scanf("%d",&aux);
        suma=suma+aux;

    /*    if(aux>max)
        {
            max=aux;
        }
        if(aux<min)
        {
            min=aux;
        }*/
    }

    printf("la suma es: %d ",suma);
    //printf("el minimo es: %d",min);
    //printf("el maximo es: %d",max);


    return 0;
}
