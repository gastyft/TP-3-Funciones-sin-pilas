#include <stdio.h>
#include <stdlib.h>



/**
Realizar una función que reciba un número positivo entero por parámetro por referencia, y cambie su signo a negativo.
*/

int cambio_signo(int num);
int main()
{
    system("COLOR B");
    int num;
    printf("Ingrese numero\n");
    scanf("%d",&num);
    system("cls");
    printf(" Numero ingresado es: %d \n",num);
printf(" Numero convertido: %d \n",cambio_signo(num));


    return 0;
}

int cambio_signo(int num){


if(num>0){
num=-num;
}
else{
    printf("El numero es negativo \n");
}


return num;



}
