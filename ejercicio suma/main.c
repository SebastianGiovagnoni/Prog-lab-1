#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroUno;
    float numeroDos;
    float suma;
    float promedio;

    printf("ingrese un numero: ");
    scanf("%f", &numeroUno);

    printf("ingrese otro numero: ");
    scanf("%f", &numeroDos);

    suma=numeroUno+numeroDos;

    promedio=suma/2;

    printf("la suma es:%.2f\nel promedio es:%.2f", suma, promedio);

    return 0;
}
