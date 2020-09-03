#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1;
    float numero2;

    printf("ingrese un numero: ");
    scanf("%f",&numero1);
    printf("ingrese un numero: ");
    scanf("%f",&numero2);

    if(numero1==numero2)
    {
        printf("el numero uno es %.2f y el numero dos que es %.2f son iguales", numero1,numero2);
    }
    else if(numero2>numero1)
    {
        printf("el numero dos es %.2f y es mayor al numero uno que es %.2f", numero2,numero1);
    }
    else
    {
        printf("el numero uno es %.2f y es mayo al numero dos que es %.2f son iguales", numero1,numero2);
    }



    return 0;
}
