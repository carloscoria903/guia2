#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, i=0, res=0;
    printf("ingrese un numero: ");
    scanf("%d", &a);
    fflush(stdout);
    printf("ingrese otro numero: ");
    scanf("%d", &b);
    fflush(stdout);
    while (i < b)
    {
        res += a;
        i++;
    }
    printf("el resultado es: %d", res);

    getchar();
    return 0;
}

/*
Dados dos números positivos A y B multiplicarlos sin usar la multiplicación.
*/