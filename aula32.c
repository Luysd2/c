#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

int main(){
    int a = 1;
    char b = 'x';

    //codigo com o exemplo if
    if(a==1){
        printf("\nOpção escolhida: 1");
    }else if(a==2)
    {
        printf("\nOpção escolhida: 2");
    }else if(a==3){
        printf("\nOpção escolhida: 3");
    }else
    {
        printf("\nOpção invalida");
    }
    
    // o msm exemplo so q com o switch
    switch (a){
    case 1:
        printf("\nOpção escolhida: 1");
        break;
    case 2:
        printf("\nOpção escolhida: 2");
        break;
    case 3:
        printf("\nOpção escolhida: 3");
        break;
    default:
        printf("\nOpção invalida");
        break;
    }
    //switch com char
    switch (b){
    case 'x':
        printf("\nA letra é X");
        break;
    case 'd':
        printf("\nA letra é D");
        break;
    default:
    printf("\nOpção invalida");
        break;
    }
}