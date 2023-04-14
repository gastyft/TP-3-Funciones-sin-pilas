#include <stdio.h>
#include <stdlib.h>

/**
Realizar una función que reciba dos números enteros por parámetro por referencia
y cargue sus valores el usuario dentro de la función.*/
void carga(int numA,int numB);
int main()
{
  int num1=0,num2=0;

system("COLOR B");
carga(&num1,&num2);
    return 0;
}

void carga(int numA,int numB){


printf("Ingrese num1 \n");
scanf(&numA);
printf("Ingrese num2 \n");
scanf(&numB);

printf("%d",numA);
}
