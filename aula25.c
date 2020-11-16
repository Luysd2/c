#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){
    bool a = true, b = false;

    if(a){
        printf("\no valor é verdadeiro");
    }
    if (b) /* eu poderia colocar (a == true) mas por padrao o bool 
          ja verifica se é verdadeiro */
    {
        printf("B É verdadeiro");
    }else
    {
        printf("B é falso");
    }
    if(!b){
        printf("\nB é falso");
    }
    
}