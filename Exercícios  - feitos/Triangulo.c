#include <stdio.h>

int a, b, c;

int main(){
    printf("Digite os lados do triangulo:\n");
    printf("Primeiro lado: ");
    scanf("%d", &a);
    printf("Segundo lado: ");
    scanf("%d", &b);
    printf("Terceiro lado: ");
    scanf("%d", &c);
    if ((a<b+c) && (b<a+c) && (c<a+b)){
        printf("Os 3 lados formam um Triangulo!");

        if ((a==b) && (b==c)){
            printf("Seu triangulo e EQUILATERO!");
        }
        else if ((a==b) || (a==c) || (b==c)){
            printf("Seu triangulo e ISOSCELES!");
        }
        else if ((a!=b) && (b!=c) && (a!=c)){
            printf("seu triangulo e ESCALENO!");
        }
    }else{
        printf("os 3 lados NAO formam um Triangulo!");
    }
}
