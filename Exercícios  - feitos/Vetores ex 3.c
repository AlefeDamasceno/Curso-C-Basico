#include <stdio.h>
#include <stdlib.h>

int matrix[5][5],i, j, num, lin, col;

int main(){
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            num = rand()%100;
            matrix[i][j] = num;
        }
    }
    lin = col = 1;
    while (lin!=0 && col!=0)
    {
        printf("Para sair digite 0,0");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<5; j++){
            printf("%d ", matrix[i][j]);
        }
    }
    if(lin==0 || col==0){
        printf("Valores Invalidos!");
        exit(0);
    }else{
        printf("\nDigite linha, coluna:\n");
        scanf("%d \n %d", &lin, &col);
        printf("\nO valor: ");
        printf("%d\n", matrix[lin-1][col-1]);
    }
    }
}