/*
Anotações:
- Os ponteiros podem dar, ao programador, a chance de modificação do endereço de meória.

1 - Maneira que se imprime o valor real do ponteiro, o valor sairá em Hexadecimal.


*/

#include <stdio.h>

int main () {

    int n;
    // Declaração de um ponteiro como var!
    int* p;

    p = &n;


    printf("Digite um numero: ");
    scanf("%d", &n);// função scanf recebe um endereço de memória e o tipo de var que ser a inserido.

    printf("O numero informado foi %d\n", n);
    printf("O Endereço de memoria: %d\n",&n);
    // 1
    printf("Ponteiro %p\n", p);
    return 0;
}