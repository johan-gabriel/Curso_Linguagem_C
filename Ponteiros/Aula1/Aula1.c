/*
Anotações:

- A var contador não está atualizando porque a função incrmenta esta recebendo sómente a cópia valor do contador,
mas não atualiza a o espaço em memória que a var contador 

- Trabalhando com ponteiros, podemos efetuar manipulação de memória...

NOVO = é assim que se representa o endereço de memoria da var contador e valor, com o "&".

1 - É quando você indiga para a função que ela ira receber o valor e o endereço de memória da variável contador.
2 - O asterisco "*" é o sinal de que a função irá receber o endereço de memória e o valor int da var
3 - O * fica colado no tipo do dado, pois nesse caso o * está apontando qual tipo de dado será puxado do endereço
de memória.
4 - nesse caso queremos o valor da variável, utilizando o * a frente para ser impresso o valor, NÃO O ENDEREÇO.
5 - Para que o valor seja incrementar tem que ser na sequência (incre/decre)(*var).
*/

#include <stdio.h>
// 2
void incrementa ( /* 3 */int* valor){
    // 4
    printf("O valor vale %d\n", (*valor));
    // NOVO
    printf("O endereco de memoria e %d\n", &valor);
    /*Função de incre ou decre
    valor++ (imprime o valor depois incrementa)
    valor-- (imprime o valor depois decrementa)
    ++valor (Incrementa o valor depois imprime)
    --valor (Decrementa o valor depois imprime)
    */
    /* valor ++; não funciona pois nesse caso estamos incrementando o endereço 
    de memória não o valor que a var carrega */
                                            //5
    printf("Na funcao incrementa vale %d\n", ++(*valor));
}

int main () {

    int contador = 10;


    printf("O contador vale %d\n", contador);
    // NOVO
    printf("O endereco de memoria do contador %d\n", &contador);

    //incrementa(contador); Era assim passou a ser assim para endereço de memória.

    // 1
    incrementa(&contador);

    printf("Depois de incrementar = %d\n", contador);


    return 0;
}