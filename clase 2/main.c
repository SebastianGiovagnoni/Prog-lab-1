#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float peso;
    char sexo;
    char nombre[20];


    printf("ingrese su nombre: ");
    scanf("%s",&nombre);

    printf("ingrese su edad: ");
    scanf("%d",&edad);

    printf("ingrese su peso: ");
    scanf("%f",&peso);

    printf("ingrese su sexo: ");
    fflush(stdin);
    scanf("%c", &sexo);


    printf("nombre:%s\nedad:%d\npeso:%.2f\nsexo:%c",nombre,edad,peso,sexo);

    return 0;
}
