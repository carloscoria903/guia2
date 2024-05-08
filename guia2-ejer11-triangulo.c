#include <stdio.h>
#include <stdlib.h>
int main()
{
    int altura, i, j;
    printf("ingrese la altura: ");
    scanf("%d", &altura);
    fflush(stdout);
    for(i = 1; i <= altura ; i++)
    {
        for(j = 1; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}
/*
Escriba un programa que dibuje el triángulo del tamaño indicado por el usuario de acuerdo
al ejemplo:
Altura: 5
*
**
***
****
*****
*/