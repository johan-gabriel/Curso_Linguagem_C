#include <stdio.h>

void modifica(int* pn,float* pf,char* pc){

    printf("O inteiro n: %d, O float f:%f, O caractere c: %c\n", *pn,*pf,*pc);
    // é necessário utilizar o " * " para apontar para o valor e não o endereço do 
    *pc = 'E';
    *pn = *pn + 5;
    *pf = *pf * 2.44;

    printf("Valor atualizado de  n: %d, f: %f, c: %c\n",*pn, *pf,*pc);
}

int main(){

    int n = 5;
    float f = 3.234;
    char c = 'b';

    printf("Valores iniciais para n: %d, f: %f, c: %c\n", n, f, c);

    modifica(&n, &f, &c);

    printf("Apos modificar n: %d, f: %f, c: %c", n, f, c);



    return 0;
}