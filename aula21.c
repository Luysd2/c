#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){

    int n1, n2, n3, m;
    printf("\n Digite o primeiro valor: ");
    scanf("%d" , &n1);
    printf("\n Digite o segundo valor: ");
    scanf("%d" , &n2);
    printf("\n Digite o terceiro valor: ");
    scanf("%d" , &n3);

    m = n1 * n2 * n3;
    printf("\n O valor da multiplicação entre %d, %d e %d é: %d ", n1, n2, n3, m);

}