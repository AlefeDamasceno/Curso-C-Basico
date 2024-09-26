#include <stdio.h>

int num, i, fatorial;

int main(){
    fatorial = 1;
    printf("Digite o numero para descobrir o fatorial: ");
    scanf("%d", &num);
    for(i= num; i!=1; i -= 1){
        fatorial *= i;
    }
    printf("O fatorial de %d: %d", num, fatorial);
}