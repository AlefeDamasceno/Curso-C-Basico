#include <stdio.h>

int i, j, col, lin;
char lista[9][9];

int main(){

    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            lista[i][j] = '.';
        }
    }

    while (1)
    {
        printf("Para sair digite um local inexistente:\n");
        printf("  1 2 3 4 5 6 7 8 9");

        for(i=0; i<9; i++){
            printf("\n");
            printf("%d ", i+1);
            for(j=0; j<9; j++){
                printf("%c ", lista[i][j]);
            }
        }
        printf("\nDigite Linha, coluna:\n");
        scanf("%d \n %d", &lin, &col);

        if ((lin==0 || col==0) || (lin==0 && col==0)){
            printf("Obrigado por usar o programa!");
            break;
        }else{
            lista[lin-1][col-1] = 'X'; 
        }
    }
}