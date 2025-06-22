#include <stdio.h>

int main() {
    int A, B, C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);


    int soma1 = A + B;
    int soma2 = A + C;

    if (soma1 < soma2) {
        printf("A soma de A + B (%d) é menor que a soma de A + C (%d)", soma1, soma2);
    } else if (soma1 > soma2) {
        printf("A soma de A + C (%d) é menor que a soma de A + B (%d)", soma2, soma1);
    } else {
        printf("A soma de A + C (%d) é igual que a soma de A + B (%d)", soma2, soma1);
    }
    

    return 0;
}