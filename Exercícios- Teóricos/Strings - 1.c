#include <stdio.h>

char saudacao[] = "Seja bem vindo!";
char pergunta[] = "Tudo bem com voce?";
char outra_forma[] = {'H','E','L','L','O','\0'};
len = sizeof(saudacao) / sizeof(saudacao[0]);
int i;

int main(){
    printf("%s\n", saudacao);
    printf("%s\n", pergunta);
    printf("%c\n", saudacao[0]);
    printf("%c\n", pergunta[0]);
    pergunta[0] = 'K';
    printf("%s\n", pergunta);
    for (i=0; i<len; i++){
        printf("%c\n", saudacao[i]);
    }

}
