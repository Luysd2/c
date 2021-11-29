#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    /*
    desenho de como é a posição da matriz 2x2
         0  1 coluna
         |  |
    0 - [1][2]
    1 - [3][4] linha
    */
    int matriz[2][2], aux1, aux2; //definindo uma matriz 2x2

    printf("\nAdicionando os valores de uma matriz 2x2\n\n");
    printf("Digite o valor para a posição [0][0] ");
    scanf("%d", &matriz[0][0]);
    printf("Digite o valor para a posição [0][1] ");
    scanf("%d", &matriz[0][1]);
    printf("Digite o valor para a posição [1][0] ");
    scanf("%d", &matriz[1][0]);
    printf("Digite o valor para a posição [1][1] ");
    scanf("%d", &matriz[1][1]);

    printf("\nmatriz com os valores na ordem");
    printf("\n%d %d  esses são os valores da linha da matriz", matriz[0][0], matriz[0][1]);
    printf("\n%d %d  esses são os valores da coluna da matriz\n", matriz[1][0], matriz[1][1]);
    
    //toda essa bagaça esta fazando a inversao 
    aux1 = matriz[0][0];//auxiliar
    aux2 = matriz[0][1];//auxiliar

    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;
    
    printf("\nmatriz com os valores na ordem invertida");
    printf("\n%d %d  esses são os valores da linha da matriz", matriz[0][0], matriz[0][1]);
    printf("\n%d %d  esses são os valores da coluna da matriz\n", matriz[1][0], matriz[1][1]);

    return 0;

}

