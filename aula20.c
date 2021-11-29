#include <stdio.h>
#include <stdlib.h>

//%d para imprimir Inteiro 
//%f para imprimir Float
//%c para imprimir Caractere
//%s para imprimir String

//operações matematicas
int main(){
    int n1, n2, n3, m;
    printf("\nDigite o os 3 valores: \n");
    scanf("%d %d %d" , &n1 , &n2, &n3);

    m = n1 * n2 * n3;
    printf("O valor da multiplicação entre %d, %d e %d é: %d ", n1, n2, n3, m);

}

/* função busca: busca um elemento na lista */
// Lista* busca (Lista* l, int v) {	Lista* p;for (p=l; p!=NULL; p=p->prox)	if (p->info == v)	printf("\n %d",p->info);	return p;	return NULL;	/* não achou o elemento */	}