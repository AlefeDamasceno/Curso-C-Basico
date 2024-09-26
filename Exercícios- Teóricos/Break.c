#include <stdio.h>
int x;
int i;

int main(){
    for(i=1; i<10; i++){
        if (i==4){
            break;
        }
    }
    printf("%d!\n", i);
    for(x=1; x<10; x++){
        if (x==4){
            continue; // Pula a iteração 4
        }
    }
    printf("%d!\n",i);

}
