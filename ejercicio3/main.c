#include <stdio.h>
#include <stdlib.h>


/**Dise�e una funci�n que reciba un n�mero entero N
y realice la suma de los n�meros enteros positivos menores que N y lo retorne.
N es un  dato ingresado por el usuario en el main.
*/
int suma();
int main()
{
system("COLOR B");
printf("La suma es: %d",suma());
    return 0;
}

int suma(){

    int num, suma=0;
    printf("ingrese un numero\n");
    scanf("%d",&num);
    for(int i=0; i<=num;i++){
    suma+=i;

    }
    return suma;
}
