#include <stdio.h>

char nome_completo[30];

int main(){
    printf("Digite seu nome completo:\n");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    printf("Hello %s", nome_completo);
}
