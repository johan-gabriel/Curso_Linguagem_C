/*FILE = arquivo

File é um ponteiro que aponta para um endereço de memória que guarda um arquivo.

sempre que for utilizado o fopen() ele pode vir nulo ou não, ou seja, se o arquivo não existe
ou está corronpido o fopen não terá conteúdo para armazenar ou ser lido.


*/
#include <stdio.h>

int main(){

    FILE *arq;
    char fruta[10];

    //            Nome do arq , tipo de abertura
    //                           w - abrir o arquivo para escrita (O conteudo será sobrescristo);
    //                           r - abrir o arquivo para leitura
    //                           a - abrir o arquivo para adcionar um conteúdo (se o arquivo tiver um conteudo, será adcionado um novo)
    arq =  fopen("frutas.txt", "a");
    // verificação se é nulo
    if (arq)
    { 
        printf("Achei o arquivo ....\n");
        printf("Informe o nome de uma Fruta: ");
        fgets(fruta, 10, stdin); // stdin = standard input -> entrada padão;
        while (fruta[0] != '0')
        {
            fputs(fruta, arq);
            printf("Informe o nome de uma Fruta: ");
            fgets(fruta, 10, stdin);
            
        }
        
            
    }
    else{

        printf("Não foi possivel criar o arquivo...\n");
    }
    // Sempre fechar o arquivo quando não houver mais manipulação do mesmo.
    // é utilizado o fclose(nome do arq) para fecha-lo.
    fclose(arq);

    return 0;

}