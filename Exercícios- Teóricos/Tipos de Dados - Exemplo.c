#include <stdio.h>

int items = 50;
float custo_por_item = 9.99;
char moeda[] = "R$";

int main(){
    float custo_total = items * custo_por_item;
    printf("Quantidade de itens: %d\n", items);
    printf("Custo por item: %.2f\n",custo_por_item);
    printf("custo Total: %.2f %s", custo_total,moeda);

}
