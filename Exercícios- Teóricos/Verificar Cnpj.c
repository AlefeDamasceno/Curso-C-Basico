#include <stdio.h>
#include <string.h>

int i, j, soma, mult, digito1, digito2, verificar[20];
char cnpj[20], cnpjcalculado[20];

int main(){
    //Modelo: 11.222.333/0001-XX
    printf("Digite seu CNPJ (apenas numeros):");
    scanf("%s", cnpj);

    for(i=0; i<12; i++){
        verificar[i] = cnpj[i] - '0';
    }
    //5,4,3,2,9,8,7,6,5,4,3 e 2 (Repetição do FOR)
    soma=j=0;

    for(i=5; i>=2; i--, j++){
        mult = i * verificar[j];
        soma += mult;
        if(j == 3){
            i = 10;
        }
    }
    if (soma%11 < 2){
        digito1 = 0;
    }else{
        digito1 = 11 - (soma%11);
    }
    verificar[12] = digito1;
    j = soma = 0;
    for(i=6; i>=2; i--, j++){
    //Saida: 6 5 4 3 2 9 8 7 6 5 4 3 2
        mult = i * verificar[j];
        soma += mult;
        if(j == 4){
            i = 10;
        }
    }
    if(soma%11 <2){
        digito2 = 0;
    }else{
        digito2 = 11 - (soma%11);
    }
    verificar[13] = digito2;
    
    for(i=0; i<14; i++){
        cnpjcalculado[i] = verificar[i] + '0';
    }   

    if(strcmp(cnpj, cnpjcalculado) == 0){
        printf("CNPJ VALIDO!");
    }else{
        printf("CNPJ INVALIDO!");
    }
}