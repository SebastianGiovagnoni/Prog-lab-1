#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char opciones;
    char seguir = 's';
    char confirma;
    int flagSaludo=0;
    int flagBrindis=0;

   do
   {
    printf("***Menu de Opciones***\n\n");
    printf("a) Saludar\n");
    printf("b) Brindar\n");
    printf("c) Despedir\n");
    printf("d) Salir\n");
    printf("Ingrese opcion: \n\n");
    fflush(stdin);
    scanf("%c", &opciones);


    switch(opciones)
    {
        case 'a':
            printf("Hola makina\n\n");
            flagSaludo=1;
            //saludas y cuando saludas se habilita el brindis
        break;

        case 'b':
            if(flagSaludo==1)
            {
               printf("chin chin\n\n");
               flagBrindis=1;
               //si se saludo se habilita el brindis
            }
            else
            {
                printf("que haces capo primero tenes que saludar\n\n");
                //si no se saludo no se puede brindar
            }

        break;

        case 'c':
            if(flagSaludo==0)
            {
              printf("para capo no podemos despedirnos si ni saludaste logi\n\n");
              //sino se saludo no se puede despedir
            }
            else if(flagBrindis==1)
            {
                printf("chau makina salu3\n\n");
                flagBrindis=0;
                flagSaludo=0;
                //si se brindo entonces se puede despedir
            }
            else
            {
                printf("como te vas a ir sin brindar capo\n\n");
                //sino se brindo no podes despedirte

            }

        break;

        case 'd':
            printf("Queres salir makina?: ");
            fflush(stdin);
            scanf("%c",&confirma);

            if(confirma=='s')
                {
                    seguir='n';
                }
        break;

        default:
            printf("opcion invalida, ingrese una opcion correcta");
    }

    //system("pause");
    printf("Presione una tecla para continuar...");//alternatica a system pause
    getch();//alternatica a system pause
    system("cls");

   }while(seguir == 's');



    return 0;
}
