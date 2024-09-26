#include <stdio.h>

int a = 5;
int b = 2;

float x = 5;
float y = 2;

int main(){
    printf("%d\n", a/b); // 2
    printf("%.1f\n", x/y); //2.5
    printf("%f\n", (float)a/b); //2.5 (mesmo sendo int) Forçando a conversão..
}
