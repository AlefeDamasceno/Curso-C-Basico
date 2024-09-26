#include <stdio.h>

int num = 5;
int i;

int main(){
    for (i=1; i<=10; i++){
        printf("%d x %d = %d\n",num, i, num*i);
    }
}
/*Note que a formatação do "print" está todas entre parenteses e
o que define a máscara é "%d/"%f" */
