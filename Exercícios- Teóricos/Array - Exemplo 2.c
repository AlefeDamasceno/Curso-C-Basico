#include <stdio.h>

int idade[] = {20, 22, 18, 35, 48, 26, 87, 70};
int i, menor_idade;
int length = sizeof(idade) / sizeof(idade[0]);

int main(){
    menor_idade = idade[0];
    for(i=1; i<length; i++){
            if (menor_idade > idade[i]){
                menor_idade = idade[i];
            }
    }
    printf("Menor idade: %d\n", menor_idade);
}

