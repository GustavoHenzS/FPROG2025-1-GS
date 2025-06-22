#include <stdio.h>

int main() {
    int num, div;

    scanf("%d", &num);
    scanf("%d", &div);

    if (div != 0)
    {
        int divisao = num / div;
        printf("Resultado: %d\n", divisao);
    } else {
        printf("Não é possível dividir por zero!\n");
    }
    

    return 0;
}