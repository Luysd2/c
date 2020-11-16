#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int a = 1;
    //laço de repetição 
    //primeiro confere a condição, depois executa o codigo 
    while (a <= 10){
        printf("\nO valor de A é: %d", a);
        //Incremento
        a += 1; // ou a++
    }

    printf("\n");
    int b = 1;
    //primeiro executa o codigo, depois verifica a condição
    do {
        printf("\nO valor de A é: %d", b);
        //Incremento
        b += 1; // ou a++
    }while (b <= 10);
    
    /*A principal diferença entre o do while para o while simples é que o while 
    comparar primeiro a condioção para poder executar o codigo, ja o do while ele 
    executa primeiro o codigo e depois verifica a condição*/

    //Contagem regreciva 
    /*int b = 10;
    while (b >= 1)
    {
        printf("\nO valor de B é: %d", b);

        //Incremento
        b -= 1; // ou b--
    }*/

}