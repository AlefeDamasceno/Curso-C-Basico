#include <stdio.h>

float lista_notas[5], soma, media;
int i;

int main(){
    printf("Adicione 5 notas:\n");
    for (i=0; i<5; i++){
        scanf("\n%f", &lista_notas[i]);
        soma += lista_notas[i];
    }
    media = soma/5;
    printf("A media foi: %.2f", media);
    if (media >= 6){
        printf("\nAluno aprovado!");
    }else{
        printf("\nAluno reprovado!");
    }

}
