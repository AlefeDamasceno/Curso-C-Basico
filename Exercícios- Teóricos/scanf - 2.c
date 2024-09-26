#include <stdio.h>

char nome[];
int idade;

int main(){
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Seja bem vindo: %s, de %d anos!", nome, idade);
}
