#include <stdio.h>
#include <stdlib.h>


/**Desarrollar una funci�n que muestre la tabla de multiplicar de un n�mero entero recibido por par�metro.
 */
void multiplicar();
int main()
{
    system("COLOR B");

multiplicar();
    return 0;
}

void multiplicar(){
int num,mult;
printf("Ingrese numero que desea de tabla de multiplicar \n");
scanf("%d",&num);
for(int i=1; i<11;i++){

mult=num*i;

    printf("%d x %d = %d \n",num,i,mult);
}



}
