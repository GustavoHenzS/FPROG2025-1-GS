#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int comuns = 0, raros = 0, lendarios = 0;
    int opcao;
    int chance;

    srand(time(NULL));

    while (opcao != 0) {
        printf("1 – Abrir uma caixa\n");
        printf("2 – Consultar itens\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            chance = rand() % 100;

            if (chance < 1) {
                lendarios++;
                printf("Você coletou 1 item lendário!\n");
            } else if (chance < 20) {
                raros++;
                printf("Você coletou 1 item raro!\n");
            } else {
                comuns++;
                printf("Você coletou 1 item comum!\n");
            }
        } else if (opcao == 2) {
            printf("Itens comuns: %d\n", comuns);
            printf("Itens raros: %d\n", raros);
            printf("Itens lendários: %d\n", lendarios);
        } else if (opcao == 3) {
            printf("Saindo do programa...\n");
            break;
        }  else {
            printf("Opção inválida! Tente novamente.\n");
        }
    }  
        
    return 0;
}