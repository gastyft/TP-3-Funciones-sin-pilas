#include <stdio.h>
#include <stdlib.h>


/**Diseñe una función que reciba un número entero N
y realice la suma de los números enteros positivos menores que N y lo retorne.
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
