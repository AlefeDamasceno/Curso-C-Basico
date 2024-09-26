#include <stdio.h>

int i = 1;
int j = 5;

int main(){
do {
    printf("%d\n", i);
    i++;
}
while (i<=5);

do{
    printf("%d\n", j);
    j -= 1;
}
while(j>0);
}
