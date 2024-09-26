#include <stdio.h>

int vetor1[10][10],i,j,k;

int main(){
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Vetor %d Elemento %d: ", i+1, j+1);
            scanf("%d", &vetor1[i][j]);
        }
    }
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%d ", vetor1[i][j]);
        }
    }

}