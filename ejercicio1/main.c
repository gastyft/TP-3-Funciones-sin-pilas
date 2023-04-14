#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27
#include <time.h>


/**
Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.
*/
int random();
int main()
{
system("COLOR B");
printf("%d",random());

    return 0;
}
int random(){
int num;
srand(time(NULL));

num= rand()%100;

return num;

}
