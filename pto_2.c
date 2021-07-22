#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char const *argv[]){




    int numeroDeFactura= 0,valorDeFactura,acumuladorImportes=0, mayoresAMil = 0,mayoresADiezMil = 0, mayoresA400MenoresA700 = 0;

    

    printf("\ningrese un numero de factura: ");

    scanf("%d", &numeroDeFactura);

    

    do

    {        

        printf("\ningrese el valor de la factura: %d ", numeroDeFactura);

        scanf("%d", &valorDeFactura);

        

        acumuladorImportes += valorDeFactura;



        if (valorDeFactura > 1000)

        {

            printf("\nla factura numero %d supera los $1000", numeroDeFactura);

            mayoresAMil++;

        }



        if (valorDeFactura > 10000)

        {

            printf("\nla factura numero %d supera los $10000", numeroDeFactura);

            mayoresADiezMil++;

        }

        

        if (valorDeFactura >= 400 && valorDeFactura <= 700)

        {

            printf("\nla factura numero %d supera los $400 y es menor a $700 %d numeroDeFactura", numeroDeFactura);

            mayoresA400MenoresA700++;

        }

        

        printf("\ningrese un numero de factura: ");

        scanf("%d", &numeroDeFactura);



       } while (numeroDeFactura !=  0);



    printf("\n %d facturas superan los $1000", mayoresAMil);

    printf("\n %d facturas superan los $10000", mayoresADiezMil);

    printf("\n %d facturas son mayores a $400 y menores a $700", mayoresA400MenoresA700);

    printf("\n la suma total de las facturas es: %d",acumuladorImportes);

    return 0;

}



