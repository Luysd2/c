#include <stdio.h>
#include <stdlib.h>


//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

int main(){
    int a= 10;
    int b= 20;

    //conectividade logica E(END). Se uma comparação for falsa ele n entra no bloco 
    if(a > 5 && a < 15){
        printf("A variavel 'A' esta entre 5 e 15");
    }
    
    //conectividade logica OU(OR). Se uma comparação for verdadeira ele ja entra no bloco 
    if(b > 5 || b < 15){
        printf("A variavel 'A' maior que 5 ou 15");
    }
    
     //Misturando conectivos
    if((a > 5 && a < 15) || b == 20 ){
        printf("A variavel 'A' esta entre  5 e 15 ou ela vale 20 ");
    }
}