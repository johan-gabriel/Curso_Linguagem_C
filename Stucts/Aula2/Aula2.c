#include <stdio.h>

// typedef -- redefinir tipos

int main (){
    // Consegue gerar uma variável que segura o TIPO da variável como no caso.
    typedef float nota;
    // Var = nota TIPO = float... Toda vez que nota for chamado será uma declaração de um float.

    //vars
    nota prova1 = 7.0;
    nota prova2 = 6.0;

    nota soma = prova1 + prova2;

    printf("A soma das notas e %.2f", soma);

    return 0;
}