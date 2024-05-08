#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, cen, des, uni;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        fflush(stdout);
        if (num > 999)
        {
            printf("Error, ingrese un numero menor a 999\n");
        }

    } while (num > 999);
    cen = num / 100;
    des = (num % 100) / 10;
    uni = (num % 100) % 10;
    printf("%d centenas, %d decenas y %d unidades\n", cen, des, uni);
    getchar();
    return 0;
}
/*Dado un número positivo descomponerlo en unidades, decenas y centenas.
Si el número es mayor a 999 imprimir un cartel de error y volver a pedir el ingreso.
Ej.: Si N = 984 el sistema debe imprimir 9 centenas, 8 decenas y 4 unidades.*/