#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    //responsavel por alimentar o rand de forma diferente
    srand((unsigned) time(NULL));
    int x;
    x = rand();
    printf ("%d", x);

}