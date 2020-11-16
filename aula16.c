#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){
    int a= 10, b = 7, x;
    x= (a + b ) / 2;
    printf("\n O valor da media de %d / %d é: %d",a,b, x);

    float n1, n2, m;
    printf("\n Digite a primeira nota: ");
    scanf("%f" , &n1);
    printf("\n Digite a Segunda  nota: ");
    scanf("%f" , &n2);

    m = (n1 + n2)/2;
    printf("\nO valor da media das notas %f e %f é %f", n1, n2, m);

}