#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char caracter(char[]);
int getInt(char []);
float getFloat(char []);

int main()
{
    float temperatura;
    float maxTemp;
    float promedioEdad;
    char sexo;
    char inicial;
    char inicialMaxT;
    int edad;
    int contM = 0;
    int contF = 0;
    int acumulador = 0;

    for(int i = 0; i<5; i++)
    {
        temperatura=getFloat("ingrese la temperatura: ");
        while(temperatura>45 || temperatura<33)
        {
            temperatura=getFloat("error ingrese una temperatura valida: ");
        }

        /*printf("ingrese edad: ");
        scanf("%d",&edad);*/
        edad=getInt("ingrese edad: ");


        while(edad>90 || edad<15)
        {
            edad=getInt("error ingrese una edad valida: ");
        }

        /*printf("ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&sexo);
        sexo=tolower(sexo);*/
        sexo=caracter("ingrese un sexo valido: ");

        while(sexo!='m' && sexo!='f')
        {
            sexo=caracter("error ingrese un sexo valido: ");
        }
        /*printf("ingrese la inicial del nombre: ");
        fflush(stdin);
        scanf("%c",&inicial);*/
        inicial=caracter("ingrese la inicial de su nombre: ");

        if(sexo=='f')
    {
        contF++;
        if(contF==0||temperatura>maxTemp);
        maxTemp=temperatura;
        inicialMaxT=inicial;
    }
    else
    {
        contM++;
    }

    acumulador+=edad;

    promedioEdad=(float)acumulador/5;

    }

 printf("la cantidade de femeninos es:%d\nla cantidad de masculinos:%d\nel promedio de edad es:%.2f\nla mujer con mas temperatura es:%c",contF,contM,promedioEdad,inicialMaxT);



    return 0;
}
int getInt (char mensaje[])
{
    int aux;
    printf(mensaje);
    scanf("%d",&aux);
    return aux;
}
float getFloat (char mensaje[])
{
    float aux;
    printf(mensaje);
    scanf("%f",&aux);
    return aux;
}
char caracter(char mensaje[])
{
    char aux;
    printf(mensaje);
    fflush(stdin);
    scanf("%c",&aux);
    return aux;
}
