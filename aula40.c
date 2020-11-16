#include <stdio.h>
#include <stdlib.h>

#define TAM 10 // definindo uma constante. 
//Ela é definida em maiuscula para melho enetndimento

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    printf("%d\n", TAM);
    int i;
    for (i = 1; i <= TAM; i++){
        printf("\n%d", i);
    }
    

    return 0;
}