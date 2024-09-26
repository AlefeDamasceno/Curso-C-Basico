#include <stdio.h>
#include <stdlib.h>

int num,i;

int main(){
    for(i=0; i<10; i++){
        num = rand()%100;
        printf("%d ", num);
    }
}