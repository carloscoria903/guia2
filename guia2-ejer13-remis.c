#include <stdio.h>
#include <stdlib.h>

int main() {
    int remis, cuadras;
    int viajeLargo = 1, maxViajes = 1;
    float maxRecaudado = 0;
    int maxCuadras = 0, totalViajes = 0;
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el número de móvil y la cantidad de cuadras recorridas para el móvil %d: ", i + 1);
        scanf("%d %d", &remis, &cuadras);
        fflush(stdout);
        float recaudado = cuadras * 1.2;
        if (cuadras > maxCuadras) {
            maxCuadras = cuadras;
            viajeLargo = remis;
        }
        if (cuadras > totalViajes) {
            totalViajes = cuadras;
            maxViajes = remis;
        }
        if (recaudado > maxRecaudado) {
            maxRecaudado = recaudado;
        }
    }
    printf("Móvil que realizó el viaje más largo: %d\n", viajeLargo);
    printf("Móvil que realizó más cantidad de viajes: %d\n", maxViajes);
    printf("Móvil que recaudó más efectivo: %.2f\n", maxRecaudado);
    
    getchar();
    return 0;
}
/*En una empresa de remises se ingresan N pares de números que indican el número de móvil y la cantidad de cuadras recorridas por ese 
móvil. Cada par es un viaje realizado por el coche. El precio por cuadra es de $1,2 y la cantidad de móviles son 5.
Genere por pantalla la siguiente información:
Móvil que realizo el viaje más largo.
Móvil que realizo más cantidad de viajes.
Móvil que recaudo más efectivo y cuanto.*/