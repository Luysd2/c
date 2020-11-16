#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){

    int n1, n2, m;
    printf("\n Digite a primeira nota: ");
    scanf("%d" , &n1);
    printf("\n Digite a Segunda  nota: ");
    scanf("%d" , &n2);

    m = n1 - n2;
    printf("%d", abs(m));

}