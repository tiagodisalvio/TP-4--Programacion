#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor = 0,i = 0, total = 0 ;

    float promedio;

    printf("ingrese el valor numero %d: ", i +1);
    scanf("%d", &valor);

    while (valor != 0){

    i++;
    total += valor;
    printf("\ningrese el valor numero %d: ", i +1);

    scanf("%d", &valor);

    }
    promedio = total / i;
    printf("\nla cantidad de valores ingresados es %d", i);
    printf("\nel promedio de valores ingresados es %f", promedio);


	return 0;
}
