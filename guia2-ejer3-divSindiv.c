#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, res = 0;
    /*printf("ingrese un numero: ");
    scanf("%d", &a);
    fflush(stdout);
    printf("ingrese otro numero: ");
    scanf("%d", &b);
    fflush(stdout);
    if (a >= b)
    {
        while (a >= b)
        {
            a -= b;
            res++;
        }
        printf("el resultado es: %d", res);
    }
    else
    {
        printf("no se puede dividir");
    }*/
    do
    {
        printf("ingrese un numero: ");
        scanf("%d", &a);
        fflush(stdout);
        printf("ingrese otro numero: ");
        scanf("%d", &b);
        fflush(stdout);
        if (a < b)
        {
            printf("no se puede dividir, ingrese otro numero");
        }
    } while (a < b);

    for (res = 0; a >= b; res++)
    {
        a -= b;
    }
    printf("el resultado es: %d", res);

    getchar();
    return 0;
}

/*
Dados dos números positivos A y B, dividirlos sin usar la división
*/