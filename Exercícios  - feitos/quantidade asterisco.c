#include <stdio.h>

int quant, i;

int main(){
    printf("Quantidade de asteriscos(0 a 10): ");
    scanf("%d", &quant);
    printf("Para: ");
    for(i=quant; i!=0; i--){
        printf("* ");
    }
    i=quant;
    printf("\nEnquanto: ");
    while (i!=0){
        printf("* ");
        i--;
    }
    i=quant;
    printf("\nRepita ate: ");
    do
    {
        printf("* ");
        i --;
    } while (i!=0);
    

}