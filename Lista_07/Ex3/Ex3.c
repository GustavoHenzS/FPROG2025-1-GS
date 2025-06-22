#include <stdio.h>

int main() {
    float GrauA, GrauB;

    printf("Digete a nota do Grau A: ");
    scanf("%f", &GrauA);

    printf("Digete a nota do Grau B: ");
    scanf("%f", &GrauB);

    float mediaUnisinos = (0.37 * GrauA) + (0.63 * GrauB);
    printf("Sua nota: %.1f\n", mediaUnisinos);

    return 0;
}