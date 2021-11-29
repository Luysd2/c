#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int i = 10;
    int s;
    // Numeoros pares entre 10 e 20 com o for
    for (i = 10; i <= 20; i++){
        s = i % 2;
        if(s == 0){
            printf("\nNumeros pares com o for é %d", i);
        }else{
            printf("\nNumeros impar com o for é %d", i);
        } 
    }
    printf("\n");

    // Numeoros pares entre 10 e 20 com o while
    i = 10;
    s = 0;
    while (i <= 20){
        i++;
        s = i%2;
        if(s == 0){
            printf("\nNumeros pares com o while é %d", i);
        }else{
            printf("\nNumeros impar com o while é %d", i);
        }
        
    }
    printf("\n");
    // Numeoros pares entre 10 e 20 com o do while
    i = 10;
    s = 0;
    do {
        i++;
        s = i%2;
        if(s == 0){
            printf("\nNumeros pares com o do while é %d", i);
        }else{
            printf("\nNumeros impar com o do while é %d", i);
        }
        
    }while (i <= 20);

    return 0;
}