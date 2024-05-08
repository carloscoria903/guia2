#include <stdio.h>
int main()
{
    int num, suma, ant, i = 0;
    printf("ingrese 10 numeros: ");
    scanf("%d", &ant);
    for (i = 1; i < 10; i++)
    {
        scanf("%d", &num);
        if (num == 2 * ant)
        {
            suma = suma + num;
        }
        ant = num;
    }
    printf("la suma de los numero es %d\n ", suma);
    getchar();
    return 0;
}

/*
Ingresar 10 números enteros positivos e imprimir la suma de aquellos cuyo valor es el doble del valor del número anterior.
Ej.: {1, 2, 3, 4, 5, 6, 12, 8, 16, 19} => Imprimir la suma (2, 12, 16) = 30.
*/