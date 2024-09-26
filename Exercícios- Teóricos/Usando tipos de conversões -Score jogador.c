#include <stdio.h>
int conquistas_totais = 500;
int conquistas_user = 74;
char simbolo = '%';
float porcentagem_user;

int main(){
    porcentagem_user = (float) conquistas_user / conquistas_totais * 100;
    printf("Porcentagem do usuario: %.1f %c\n", porcentagem_user, simbolo);
}
