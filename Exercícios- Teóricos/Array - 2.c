#include <stdio.h>

int lista_num[] = {1,2,3,4,5};
int i;
int lenght = sizeof(lista_num) / sizeof(lista_num[0]);

int main(){
    for(i=0; i<lenght; i++){
        printf("%d\n", lista_num[i]);
    }
}
