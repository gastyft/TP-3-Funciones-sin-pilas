#include <stdio.h>
#include <stdlib.h>
#define ESC 27
#include<conio.h>

/**
Realice una pequeña calculadora, utilizando funciones
(una función de suma, una de multiplicación, una de resta, una de división…)
*/

int multi(int num1,int num2);
int suma(int num1, int num2);
float divi(int num1,int num2);
void menu();

int main()
{
    system("COLOR B");
    menu();

    return 0;
}
int suma(int num1, int num2)
{
    int suma=0;
    suma=num1+num2;
    return suma;



}
int multi(int num1, int num2)
{
    int multi=0;
    multi=num1*num2;
    return multi;
}
float divi(int num1, int num2)
{
    float division=0;
    division= (float)(num1/num2);
    return division;

}
int resta(int num1, int num2)
{
    int resta=0;
    resta=num1-num2;
    return resta;

}

void menu()
{


    char o=0;

    while(o!=ESC)
    {

        int num1,num2;

        printf(" MENU \n");
        printf("Opcion 1 \"SUMA\" \n");
        printf("Opcion 2 \"RESTA\" \n");
        printf("Opcion 3 \"MULTIPLICACION\" \n");
        printf("Opcion 4 \"DIVISION\" \n");
        printf("Presione ESCAPE para salir \n");

        o= getch();
        if(o==ESC){
            printf("Selecciono ESCAPE. Adios \n");
        }
        else{
        printf("Selecciono %c \n",o);
        }
         if(o ==ESC){
            break;
         }
         else{
            printf("ingrese un numero 1\n\t");
        scanf("%d",&num1);
        printf("Ingrese numero 2\n\t");
        scanf("%d",&num2);
         }

        switch(o)
        {
        case '1':
          printf("\t %d \n ", suma(num1,num2));
            break;
        case '2':
            printf("\t%d \n ",resta(num1,num2));
            break;
        case '3':
            printf("\t %d \n ",multi(num1,num2));
            break;
        case '4':
            printf(" \t %2.f \n",divi(num1,num2));
            break;
        case 27:
            break;
        default:
            printf("ha seleccionado una opcion incorrecta \n");

            printf("Presione cualquier tecla para seguir o ESCAPE para salir");
            o=getch();
            break;
        }

    }

}
