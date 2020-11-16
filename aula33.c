#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere(char)
//%s para imprimir String

void calculadora(){
    printf("\nCalculadora simples\n");
    /*eu coloquei ele aqui por puro perfeccionismo*/
}
int main(){
    int x, y, op, r;
    char outra;
    //printf("\nCalculadora simples\n");
    printf("\nDigite o primeiro valor: ");
    scanf("%d" , &x);
    printf("Digite o segundo valor: ");
    scanf("%d" , &y);

    printf("\nEscolha uma das opções: \n");
    printf("1 para Somar");
    printf("\n2 para Subtrair");
    printf("\n3 para Dividir");
    printf("\n4 para Multiplicar");
    printf("\n0 para sair\n");
    printf("\nQual a sua escolha? ");
    scanf("%d" , &op);
    
    switch (op){
    case 1:
        r = x + y;
        printf("\nA soma dos valores X(%d) e Y(%d) é : %d", x, y, r);
        break;
    case 2:
        r = x - y;
        printf("\nA subtração dos valores X(%d) e Y(%d) é : %d", x, y, r);
        break;
    case 3:
        r = x / y;
        printf("\nA divisão dos valores X(%d) e Y(%d) é %d", x, y, r);
        break;
    case 4:
        r = x * y;
        printf("\nA Multiplicação dos valores X(%d) e Y(%d) é %d", x, y, r);
        break;
    case 0:
        break;
    default:
        printf("\nOpção invalida");
        fflush(stdin); // limpando o buffer(memoria temporaria)
        printf("\nDeseja tentar novamente?\n S para sim ou N para não: ");
        scanf("%c", &outra);
        
        switch (outra)
        {
        case 's':
        printf("\n\nFaça suas escolhas novamente!\n");
            main();
            break;
        case 'n':
            break;
        }
        break;
    }
return 0;
}