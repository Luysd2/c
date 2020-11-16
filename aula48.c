#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String



/*int main(){
    float vet[3], soma = 0; // definindo o vetor
    int i, t;
    float x;

    for(i = 0; i < TAM; i++){
        printf("Digite o valor: ");
        scanf("%f", &vet[i]);
        soma += vet[i];
        x = soma / 3;
    }
    printf("\n");

    for (i = 0; i < 3; i++){
        printf("O vetor[%d] é : %.2f\n", i, vet[i]);
    }
    printf("\nA media dos valores digitados é %.2f", x);

    return 0;
    // tem outra forma q eu fiz no arquivo aula48-.c

}*/
// a msm funcionalidade mas adptado
int main(){
    int i;
    float x;
    float soma = 0;
    int t;

    printf("\nQual o tamanho do vetor? ");
    scanf("%d", &t);

    float vet[t]; // definindo o vetor

    for(i = 0; i < t; i++){
        printf("Digite o valor: ");
        scanf("%f", &vet[i]);
        soma += vet[i];
        x = soma / 3;
    }
    printf("\n");

    for (i = 0; i < t; i++){
        printf("O vetor[%d] é : %.2f\n", i, vet[i]);
    }
    printf("\nA media dos valores digitados é %.2f", x);

    return 0;
    // tem outra forma q eu fiz no arquivo aula48-.c

}
