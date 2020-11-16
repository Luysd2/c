#include <stdio.h>
#include <stdlib.h>


//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

int main(){
    float l1, l2, l3;

    printf("Verificar se os tres lados do triangulo são iguais\n");

    printf("\nDigite o primeiro lado: ");
    scanf("%f" , &l1);
    printf("Digite o segundo lado: ");
    scanf("%f" , &l2);
    printf("Digite o terceiro lado: ");
    scanf("%f" , &l3);

    if (l1 == l2 && l2 == l3)
    {
        printf("\nOs trés valores informado são: %.0f, %.0f, %.0f, ", l1, l2, l3);
        printf("Logo esse é um triângulo equilátero");
    } else
    {
        printf("\nEsse não é um triângulo equilátero");
    }
    
    
}