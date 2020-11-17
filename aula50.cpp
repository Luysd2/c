#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    std::string texto; // definindo uma string
    printf("Digite a palavra ");//imprimindo uma string
    std::cin>>texto;//lendo uma string
    std::cout<< "\n A palavra é: " <<texto;//imprimindo a variavel

    return 0;
}
