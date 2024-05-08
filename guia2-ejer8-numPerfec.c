#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sumDivi = 0;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &num);
    fflush(stdout);
    if (num <= 0)
    {
        printf("el numero no es positivo.\n");
    }
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumDivi += i;
        }
    }
    if (sumDivi == num)
    {
        printf("%d es un numero perfecto.\n", num);
    }
    else
    {
        printf("no es un numero perfecto.");
    }
    getchar();
    return 0;
}

/*
Dado un número positivo determinar si es perfecto. Un número es perfecto si es igual a la suma de todos
sus divisores menores a él mismo.Ej.: 6 => 1 + 2 + 3.
*/