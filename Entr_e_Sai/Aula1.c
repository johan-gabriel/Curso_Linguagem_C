/*FILE = arquivo

File é um ponteiro que aponta para um endereço de memória que guarda um arquivo.




*/
#include <stdio.h>

int main(){

    FILE *arq;
    //             Nome do arq , tipo de abertura
    //                           w - abrir o arquivo para escrita (O conteudo será sobrescristo);
    //                           r - abrir o arquivo para leitura
    //                           a - abrir o arquivo para adcionar um conteúdo (se o arquivo tiver um conteudo, será adcionado um novo)
    arq =  fopen("arquivo.txt", "w");

    // Sempre fechar o arquivo quando não houver mais manipulação do mesmo.
    // é utilizado o fclose(nome do arq) para fecha-lo.
    fclose(arq);

    return 0;

}