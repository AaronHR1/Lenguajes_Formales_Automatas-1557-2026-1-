#include <stdio.h>
#include <string.h>
int index=0;

void inversa(char *l, char *invertido){
    char caracter= *l;
    if (*l == '\0') {
        return;
    }

    inversa(l + 1, invertido);

    invertido[index]= caracter;
    index++;

}

int main() {
    char lenguaje[]= "morelia";
    char invertido[strlen(lenguaje) + 1];

    inversa(lenguaje,invertido);
    invertido[index] = '\0';

    printf("%s\n",invertido);  
    return 0;
}

