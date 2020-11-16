#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){
    int a=5, b=10, c=15;
    if (a > 2){
        printf("\n %d é maior que 2", a);
    }
    if (c >= b){
        printf("\n %d é maior ou igual a %d", c, b);
    }
    if (a < 10){
        printf("\n %d é menor que 10", a);
    }
    if (a <= 10){
        printf("\n %d é menor ou igual a 10", a);
    }
    if(a != 10){
        printf("\n %d não é 10", a);
    }
   
}