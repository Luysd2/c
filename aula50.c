#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    char texto[255]; //definindo uma string com o temanho 255 de caracteres

    printf("Digite uma palavra "); 

    setbuf(stdin, 0);// limpando o buffer

    fgets(texto, 255, stdin);// lê a string 

    /*essa funcão abaixo esta limpando os restantes das casas reservada 
    para a palvra texto. a variavel texto tem o tamanho 255, entao na memoria
    ela vai ter 255 casas reservadas para ela, no exemplo do codigo eu coloquei 
    apenas a palavra "luis" quem tema penas 4 letras(vai ocupar apenas 4 casas)
    e o restante(251) vai ficar reservado para ela sem ser utilizado, essa função
    ela faz com q a variavel so ocupe na memoria o tamanho da palavra informada pelo
    usuario(no caso, luis). num codigo pequeno isso n faz diferença mas em um 
    codigo grande faz*/
    texto[strlen(texto) -1] = '\0'; 

    printf("%s", texto);

    return 0;
}
