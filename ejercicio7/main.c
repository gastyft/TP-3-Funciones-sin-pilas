#include <stdio.h>
#include <stdlib.h>

/**
Realizar una funci�n que reciba dos n�meros enteros por par�metro por referencia
y cargue sus valores el usuario dentro de la funci�n.*/
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
