#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, fact=1;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    fflush(stdout);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("El factorial de %d es: %d", n, fact);
    getchar();
    return 0;
}
/*
Calcular el factorial de un número positivo ingresado por el usuario. 
*/