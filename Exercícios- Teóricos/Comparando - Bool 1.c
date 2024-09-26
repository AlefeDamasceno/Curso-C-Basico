#include <stdio.h>
#include <stdbool.h>

bool programacao_divertida = true;
bool pizza_gostosa = true;
bool eu_sou_feio = false;
int x = 4;
int y = 6;
int minha_idade = 42;
int idade_votacao = 18;

int main(){
    printf("%d\n", programacao_divertida);
    printf("%d\n", eu_sou_feio);
    printf("%d\n", 15 < 10);
    printf("%d\n", 10 > 9);
    printf("%d\n%d\n", x > y, y == x);
    printf("%d\n", programacao_divertida = pizza_gostosa);
    printf("%d", minha_idade >= idade_votacao);

}
