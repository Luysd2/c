#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int a = 1;
    //laço de repetição 
    while (a <= 10)
    {
        printf("\nO valor de A é: %d", a);

        //Incremento
        a += 1; // ou a++
    }
    printf("\n");

    //Contagem regreciva 
    int b = 10;
    while (b >= 1)
    {
        printf("\nO valor de B é: %d", b);

        //Incremento
        b -= 1; // ou b--
    }

}