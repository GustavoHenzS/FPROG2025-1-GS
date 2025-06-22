#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_adi;

    srand(time(NULL));

    int valor = (rand() % 11) - 1;

    printf("Tente adivinhar o número: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num_adi);
        if (num_adi < valor) {
            printf("Frio - ");
        } else if (num_adi > valor) {
            printf("Quente - ");
        } else if (num_adi == valor) {
            printf("Parabéns! Você venceu!\n");
            break;
        } 
        if (i == 2) {
            printf("Tente novamente!");
        }
    }

    
    

    return 0;
}