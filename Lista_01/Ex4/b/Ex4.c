#include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3, media_ponderada;

    // Entrada
    printf("Digite as notas n1, n2, n3: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite os pesos p1, p2, p3: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media_ponderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    // Saída
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}