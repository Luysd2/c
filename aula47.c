#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int vet[3]; // definindo o vetor
    int cont;
    vet[0] = 5;
    vet[1] = 10;
    vet[2] = 20;

    //exibindo os valores do vetor
    printf("\nA posição 0: %d", vet[0]);
    printf("\nA posição 0: %d", vet[1]);
    printf("\nA posição 0: %d\n", vet[2]);

    //imprimindo o vetor em um laço de repetição 
    for(cont = 0; cont < 3; cont++){
        printf("\nPosição %d : %d",cont, vet[cont]);
    }
    printf("\n");
    //adicionando 1 para cada posição
    for(cont = 0; cont < 3; cont++){
        vet[cont]++;
    }

    // aqui o usuario pode adicionar os valores para o vetor
    for(cont = 0; cont < 3; cont++){
        printf("Digite 3 valores para o vetor: ");
        scanf("%d", &vet[cont]);
    }
    return 0;
}