#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int i, valor, aux = 0;
    printf("\nDigite um valor para verificar se ele é primo: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor; i++){
        if (valor % i == 0){
            aux++;
        }
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
        
    }
    if (aux == 2){
        printf("\nO valor é primo\n");
    }else{
        printf("\nO valor não é primo\n");
    }

    return 0;
}