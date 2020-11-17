#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int matriz[2][2], i, j; //definindo uma matriz 2x2

    //passando valores para a matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //imprimir os valores
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            //printf("\n I é = %d e J é = %d", i, j);  //imprimindo os índices da matrix
            //printf("\n %d", matriz[i][j]); //imprimindo os valores da matrix
            printf("%d ", matriz[i][j]); //imprimindo os valores da matrix de outra forma
        }
        printf("\n");
    }

    printf("\n");

    //lendo valores q serao informados pelo o usuario 
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite os valores para a matriz: ");
        scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    
    //imprimir os valores informado pelo o usuario
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}
