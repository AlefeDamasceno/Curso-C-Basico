#include <stdio.h>
#include <string.h>

char str1[] = "Hello ";
char str2[] = "World!";
char str3[] = "Tudo bem com voce?";
char str4[];

int main(){
    strcat(str1,str2);
    strcpy(str4, str3);
    printf("%s\n", str1);
    printf("%s", str4);

}
