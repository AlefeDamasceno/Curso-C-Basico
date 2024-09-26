#include <stdio.h>

int vetor1[10], i;

int main() {
    for(i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    printf("\nInverso: ");
    for(i = 4; i >= 0; i--) {
        printf("%d ", vetor1[i]);
    }
    printf("\nMaiores que 3: ");
    for(i = 0; i < 5; i++) {
        if (vetor1[i] > 3) {
            printf("%d ", vetor1[i]);
        }
    }
    printf("\nÍndices dos pares: ");
    for(i = 0; i < 5; i++) {
        if (vetor1[i] % 2 == 0) {
            printf("%d ", i+1); 
        }
    }
}
