#include <stdio.h>

int vetor1[10], vetor2[10], i, j;

int main(){
    for(i=1; i<=1; i++){
        for(j=0; j<5; j++){
            printf("vetor%d: pos %d: ", i, j);
            scanf("%d", &vetor1[j]);
        }

    }
    printf("\n");
    for(i=2;i<=2; i++){
        for(j=0; j<5; j++){
            printf("vetor%d: pos %d: ", i, j);
            scanf("%d", &vetor2[j]);
        }
    }
    printf("\nSoma:\n");
    for(i=0; i<5; i++){    
        printf("%d ", vetor1[i] + vetor2[i]);
    }
}