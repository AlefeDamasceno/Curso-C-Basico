#include <stdio.h>

int horario = 20;

int main(){
if (horario <= 12){
    printf("Bom dia!");
}else if (horario <= 18){
    printf("Boa tarde!");
}else{
    printf("Boa noite!");
}
}

/*Se condição 1 for verdade, acaba.
Se condição 1 for falsa, condição 2 for verdade, acaba
se condição 1 for falsa, condição 2 for falsa, vai pro else e acaba. */
