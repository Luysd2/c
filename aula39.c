#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

int main(){
    int opcao;

    while (opcao < 1 || opcao > 3){
        printf("\n----ESCOLHA UMA DAS OPÇOES---\n");
        printf("1- Opção 1\n");
        printf("2- Opção 2\n");
        printf("3- Opção 3\n");
        printf("\nQual a sua escolha? ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOpção 1 foi escolhida");
            break;
        case 2:
            printf("\nOpção 2 foi escolhida");
            break;
        case 3:
            printf("\nOpção 3 foi escolhida");
            break;
        default:
            printf("\nOpção invalida");
            printf("vc esta vendo a opção %d ai no meio dessas opções? ", opcao);
            break;
        }  
    }   
    return 0;
}