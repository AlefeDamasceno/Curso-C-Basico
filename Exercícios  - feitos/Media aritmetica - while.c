#include <stdio.h>

float lista_notas[30], media,soma;
int notas_adicionar, i;

int main(){
    printf("Quantas notas deseja adicionar: ");
    scanf("%d", &notas_adicionar);
    printf("adicione as %d notas abaixo:\n", notas_adicionar);
    for (i=0; i<notas_adicionar;i++){
        scanf("\n%f", &lista_notas[i]);
        soma += lista_notas[i];

    }
    media = soma / notas_adicionar;
    printf("A media foi: %.2f", media);
}
