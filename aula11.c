#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

int main(){
    // eu poderia deixar void main(), mas na copilacao mostrava um erro
    //perminte usar acentos
    setlocale(LC_ALL, "");

    //imprimir 
    printf("olá \n");

    // lendo valor inteiro
    int a = 5;
    // %d para int
    printf("o valor de A é: %d \n", a);
    scanf("%d" , &a);
    printf("o valor de A mudou para %d \n", a);

    // lendo valor quebrados
    float b = 5.5;
    // %f para float 
    printf("\no valor de B é: %f \n", b);
    scanf("%f" , &b);
    printf(" o valor de B mudou para %f \n", b);

    // lendo caractere
    char c = 't';
    // %c para char 
    printf("\no valor de C é: %c \n", c);
    fflush(stdin); // limpando o buffer(memoria temporaria)
    // fazer isso sempre q for ler um valor char
    scanf("%c" , &c);
    printf("o valor de C mudou para %c \n", c);

}