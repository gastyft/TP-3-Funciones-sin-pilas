#include <stdio.h>
#include <stdlib.h>

/**
Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.
*/


void mayor_y_menor();
int main()
{
system("COLOR B");
 mayor_y_menor();

    return 0;
}
void mayor_y_menor(){
int num1,num2,num3;

printf("Ingrese numero 1 \t\n");
scanf("%d", &num1);
printf("Ingrese numero 2 \t\n");
scanf("%d", &num2);
printf("Ingrese numero 3 \t\n");
scanf("%d", &num3);

if(num1>num2 && num1>num3){

    printf("num1 es mayor %d\n",num1);
}
if(num2>num1 && num2>num3){

    printf("num2 es mayor %d\n ",num2);
}
if(num3>num2 && num3>num1){

    printf("num3 es mayor %d\n",num3);
}

if(num1<num2 && num1<num3){

    printf("num1 es menor %d\n",num1);
}
if(num2<num1 && num2<num3){

    printf("num2 es menor %d\n",num2);
}
if(num3<num2 && num3<num1){

    printf("num3 es menor %d\n",num3);
}

}
