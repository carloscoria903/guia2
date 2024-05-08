#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, n, i = 0, sumNeg = 0, positivo = 0;
    printf("ingrese la cantidad de veces que desea agregar numeros\n");
    scanf("%d", &num);
    fflush(stdin);
    printf("los numeros\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            positivo ++;
        }
        else
        {
            sumNeg = sumNeg + n;
        }
    }

    printf("la cantidad de positivo son: %d\n", positivo);
    printf("la suma de los numeros negativos es: %d\n", sumNeg);
    getchar();
    return 0;
}
/*
Dados N números, determinar la cantidad de positivos y la suma de los negativos
*/