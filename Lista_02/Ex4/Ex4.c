#include <stdio.h>

int main() {
    float grauA, grauB, media;

    printf("Digite a nota do Grau A: ");
    scanf("%f", &grauA);

    printf("Digite a nota do Grau B: ");
    scanf("%f", &grauB);

    media = (grauA * (0.37)) + (grauB * (0.63));

    printf("Sua média final é: %.2f\n", media);

    return 0;
}