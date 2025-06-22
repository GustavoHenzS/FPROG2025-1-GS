#include <stdio.h>

int main() {
    int fat, num;
    printf("Digete o fatorial: ");
    scanf("%d", &num) ;

    for(fat = 1; num > 1; num = num - 1) {
        fat = fat * num;
    }

    printf("\n%d\n", fat);
    
    return 0;
}