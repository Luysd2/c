#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int cont;
    // de um ate 10
    for (cont = 1; cont <= 10; cont++){
        printf("\nO valor de CONT é: %d", cont);
    }

    printf("\n");
    // de 10 ate 1
    for (cont = 10; cont >= 1; cont--){
        printf("\nO valor de CONT é: %d", cont);
    }
    printf("\n\n");
    // tabuada do 5
    for (cont = 1; cont <= 10; cont++){
        printf("\n5 X %d = %d", cont, 5 * cont);
    }
    return 0;


}