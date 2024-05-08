#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, altura, ancho;
    printf("ingrese la altura: ");
    scanf("%d", &altura);
    fflush(stdout);
    printf("ingrese el ancho: ");
    scanf("%d", &ancho);
    fflush(stdout);
    for (i = 1; i <= altura; i++){
        for (j = 1; j <= ancho; j++){
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}
/*
Escriba un programa que pida al usuario ingresar la altura y el ancho de un rectángulo y lo dibuje utilizando asteriscos:
Ejemplo:
Altura: 3
Ancho: 5
*****
*****
*****
*/
