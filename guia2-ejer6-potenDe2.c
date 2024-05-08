#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float i, num;
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    fflush(stdout);
    for (i = 0; i < num; i++)
    {
        double resul = pow (2,i);
        printf("2^%2.f = %.0f\n", i, resul);
    }
    getchar();
    return 0;
}
/*
Escriba un programa que genere todas las potencias de 2, desde la 0-ésima hasta la ingresada por el usuario.
Recuerde que la función POW devuelve un número decimal.
*/