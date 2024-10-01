#include <stdio.h>
#include <string.h>

char cpf[12], cpfcalculado[12];
int verificar[12], i, j, soma, mult, digito1, digito2;


int main(){
    printf("Digite seu CPF (apenas numeros): ");
    scanf("%s", cpf);

    for (i = 0; i<9; i++){
        verificar[i] = cpf[i] - '0';
    }

    soma= j = 0;

    for(i=10; i>=2; i--){ //i = 10, 9, 8, 7, 6, 5, 4, 3, 2
        mult = i * verificar[j];
        soma += mult;
        j++;
    }
    
    if (soma%11 < 2){
        digito1 = 0;
    }else{
        digito1 = 11 - (soma%11);
    }
    verificar[9] = digito1;

   soma = j = 0;

    for(i=11; i>=2; i--){ // 11 10 9 8 7 6 5 4 3 2
        mult = i * verificar[j];
        soma += mult;
        j++;   
    }
    
    if (soma%11 < 2){
        digito2 = 0;
    }else{
        digito2 = 11 - (soma%11);
    }
    verificar[10] = digito2;

    for(i=0; i<11; i++){
        cpfcalculado[i] = verificar[i] + '0';
    }
    
    if (strcmp(cpf, cpfcalculado) == 0){
        printf("CPF VALIDO!");
    }else{
        printf("CPF nao VALIDO!");
    }
}