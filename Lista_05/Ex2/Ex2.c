#include <stdio.h>

int main(){
    int M[5];

    for(int i=0; i < 5; i++) {
        printf("Digete o vetor %d: ", i + 1);
        scanf("%i", &M[i]);
    }

    for(int j=0; j < 5; j++) {
        int multi = M[j] * j;
        printf("Resultado: %d\n", multi);
    }

    return 0;
}