#include <stdio.h>

float n1,n2,n3,n4, media;

int main(){
    printf("Digite as 4 notas:\n");
    scanf("%f %f\n %f\n %f", &n1,&n2,&n3,&n4);
    media = (n1+n2+n3+n4)/4;
    printf("Media: %.2f", media);
    if (media >= 6){
        printf("\nO Aluno foi aprovado!");
    }else{
        printf("\nO aluno foi reprovado!");
    }
}
