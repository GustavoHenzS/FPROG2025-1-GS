#include <stdio.h>

int main() {
    int inteiro;
    int tabuada;

    scanf("%d", &inteiro);
    for (int i = 0; i < 10; i++) {
        tabuada = inteiro * (i+1);
        printf("%d x %d = %d\n", inteiro, i+1, tabuada);
    }

    return 0;
}