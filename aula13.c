#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){
    int a = 6, b = 3, x;
    x= a + b;
    printf("O valor da soma de %d + %d é: %d",a,b, x);

    x= a - b;
    printf("\n O valor da subtração de %d - %d é: %d",a,b, x);
    
    x= a / b;
    printf("\n O valor da divisão de %d / %d é: %d",a,b, x);
    
    x= a * b;
    printf("\n O valor da multiplicação de %d * %d é: %d",a,b, x);

    //resto da divisão
    x= a % b;
    printf("\n O valor do restdo da divisão de %d / %d é: %d",a,b, x);

    printf("\no valor absoluto de -3 é %d", abs(-3));

    //pausando
    system("pause");
}