/*
Anotações:
- quando as arreys são declaradas a primeira posição da arrey é o endereço de memória que ela esta alocada.


*/
/*
Ilustações:

pos      0   1   2    3   4
       -----------------------
vet[5] | 5 | 8 | 12 | 1 | 70 |
       -----------------------


*/

#include <stdio.h>

int main () {

    int vet[5], valor;

    for(int i = 0; i<5 ; i++){
        printf("informe um valor da posicao %d do vetor", (i+1));
        scanf("%d", &vet[i]);
        
    }

    for (int i = 0; i < 5; i++)
    {   
        valor = vet[i];
        printf("posicao %d ,valor %d\n", (i+1), vet[i]);
    }
    printf("%p\n",&vet[0]);
    printf("%p\n",vet);

    return 0;
}