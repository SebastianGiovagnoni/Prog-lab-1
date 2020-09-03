#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int multiplicaion;
    float promedio;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma=numeroUno + numeroDos;
    resta=numeroUno - numeroDos;
    multiplicaion=numeroUno * numeroDos;
    promedio=(float)suma/2;

    printf("el resultado de la suma es:%d\nel resultado de la resta es: %d\nel resultado de la multiplicaion es: %d\nel promedio es: %.2f\n ", suma,resta,multiplicaion, promedio);

    system("pause");


    return 0;
}
