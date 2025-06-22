#include <stdio.h>

int main() {
    char sexo;
    int dia, mes, ano;
    float altura, peso;

    // Entrada
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    // Saída
    printf("\nCadastro:\nSexo: %c\nNascimento: %02d/%02d/%d\nAltura: %.2f m\nPeso: %.2f kg\n", sexo, dia, mes, ano, altura, peso);

    return 0;
}