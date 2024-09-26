#include <stdio.h>

int i;
float nota, soma, media;

int main(){
    while (i<5){
        printf("Digite a nota do aluno: ");
        scanf("\n%f", &nota);
        soma += nota;
        i++;
    }
    media = soma/5;
    printf("\nA média da sala é: %.2f", media);
}