#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    
    float vet[3]; // definindo o vetor
    float x;
    printf("\nDigite o primeiro valor ");
    scanf("%f", &vet[0]);
    printf("Digite o segundo valor ");
    scanf("%f", &vet[1]);
    printf("Digite o terceiro valor ");
    scanf("%f", &vet[2]);

    printf("\nO valor do vetor[0] é: %.2f", vet[0]);
    printf("\nO valor do vetor[1] é: %.2f", vet[1]);
    printf("\nO valor do vetor[2] é: %.2f", vet[2]);

    x = (vet[0] + vet[1] + vet[2]) / 3;
    printf("\nO valor da media dos valores do vetor é: %.2f", x);

    return 0;
}