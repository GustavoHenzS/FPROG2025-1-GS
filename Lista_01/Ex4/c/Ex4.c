#include <stdio.h>

int main() {
    float tempo1 = 2.0, velocidade1 = 12.0;
    float tempo2 = 3.0, velocidade2 = 18.0;
    float distancia_total;

    // Processamento
    distancia_total = (tempo1 * velocidade1) + (tempo2 * velocidade2);

    // Saída
    printf("Distancia total percorrida: %.2f km\n", distancia_total);

    return 0;
}