#include <stdio.h>

int i = 1;
int j = 5;

int main(){
    while (i<=5){
        printf("%d\n", i);
        i++;
    }
    while(j>=0){
        printf("%d\n", j);
        j -= 1;
    }
}
//Outputs 1,2,3,4,5
//Outputs 5,4,3,2,1
//Enquanto i for menor ou igual a 5, while screen "i".
