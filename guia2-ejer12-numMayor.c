#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, num, mayor;

    printf("ingresa la cantidad de numeros: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("los numeros debe ser positivo.\n");
    }
    printf("ingrese los numeros:\n");
    for (int i = 0; i < n; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &num);
        if (i == 0 || num > mayor) {
            mayor = num;
        }
    }
    printf("el mayor es: %d\n", mayor);
    getchar();
    return 0;
}
/*
Escriba un programa que permita determinar el número mayor perteneciente a un conjunto de n números(positivos o negativos) 
donde tanto el valor de n como el de los números deben ser ingresados por el usuario.
*/