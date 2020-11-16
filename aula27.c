#include <stdio.h>
#include <stdlib.h>


//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

int main(){
    printf("-----calcular a media---\n");
    float n1, n2, n3, m;

    printf("\nDigite a sua primeira nota: ");
    scanf("%f" , &n1);
    printf("\nDigite a sua segunda nota: ");
    scanf("%f" , &n2);
    printf("\nDigite a sua terciera nota: ");
    scanf("%f" , &n3);

    m = (n1 + n2 + n3)/ 3;
    if (m <= 7)
    {
        printf("sua nota foi: %.2f voce esta aprovado ", m);
    }else
    {
        printf("sua nota foi: %.2f voce esta reprovado ", m);
    }
    
    
}