#include <stdio.h>

int idades[] = {20,22,18,35,48,26,87,70};
int i;
float soma,media;
int length = sizeof(idades) / sizeof(idades[0]); //5


int main(){
    for(i=0; i<length; i++){ //Executa 5 vezes
        soma += idades[i];
    }
media = soma/length;
printf("Media das idades: %.2f", media);
}
