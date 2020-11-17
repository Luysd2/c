#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int matriz[2][2], i, j; //definindo uma matriz 2x2

    printf("\nAdicionando os valores de uma matriz 2x2\n\n");
    //lendo valores q serao informados pelo o usuario 
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite os valores para a matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }
     //imprimir os valores
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            //printf("\n I é = %d e J é = %d", i, j);  //imprimindo os índices da matrix
            //printf("\n %d", matriz[i][j]); //imprimindo os valores da matrix
            printf("%d ", matriz[i][j]); //imprimindo os valores da matrix de outra forma
        }
        printf("\n");
    }

    printf("\nInvertendo os valores da matriz 2x2\n");
    
    //imprimir os valores informado pelo o usuario de forma inversa
    for (i = 1; i >= 0; i--){
        for (j = 1; j >= 0; j--){
            printf("%d ", matriz[i][j]); 
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
