#include <stdio.h>

int i;

int main(){
    printf("Testando o for regressivo:\n");
    for(i=3; i!=1; i--){
        printf("%d\n", i);
    }
}