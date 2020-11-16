#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int i = 10, b = 10, c = 10;
    // contando de 10 a 1 com o for
    for (i = 10; i >= 1; i--){
        printf("\nO valor do I com o for é: %d", i);
    }
    
    printf("\n");
    // contando de 10 a 1 com o while

    while (b >= 1){
        printf("\nO valor do B com o while é: %d", b);
        b--; //Decremento
    }

    printf("\n");
    // contando de 10 a 1 com o do while
 
    do {
        printf("\nO valor do C com o do while é: %d", c);
        c--; //decremento
    }while (c >= 1);
    //linha de comentario para fazer o teste no git
    return 0;
}
