#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long a = 0, b = 1, c, i;
    printf("Los numeros son:\n");
    printf("%llu\n", a);
    printf("%llu\n", b);
    for (i = 2; i < 100; i++)
    {
        c = a + b;
        printf("%llu\n", c);
        a = b;
        b = c;
    }
    return 0;
}
/*
Imprimir los primeros 100 elementos de la serie de Fibonacci.
*/