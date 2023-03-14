/*FILE = arquivo

File é um ponteiro que aponta para um endereço de memória que guarda um arquivo.

sempre que for utilizado o fopen() ele pode vir nulo ou não, ou seja, se o arquivo não existe
ou está corronpido o fopen não terá conteúdo para armazenar ou ser lido.


*/
#include <stdio.h>

int main(){

    FILE *arq;
    int num, resultado, soma = 0;
    //            Nome do arq , tipo de abertura
    //                           w - abrir o arquivo para escrita (O conteudo será sobrescristo);
    //                           r - abrir o arquivo para leitura
    //                           a - abrir o arquivo para adcionar um conteúdo (se o arquivo tiver um conteudo, será adcionado um novo)
    arq =  fopen("arquivo.txt", "r");

    // verificação se é nulo
    if (arq)
    {
        
        printf("Achei o arquivo ....\n");
        // mesmo caso da macro EOF, mas nesse caso é uma função que varre o arquivo até o final

        while (!feof(arq))
        {   
            resultado = fscanf(arq, "%d", &num);
            printf("Resultado: %d\n",resultado);
            if(resultado == 1){
                soma = soma + num;
            }
        }
        

    }
    else{

        printf("Não achei o arquivo .....\n");
    }
    
    printf("A soma dos numeros encontrados e %d", soma);
    // Sempre fechar o arquivo quando não houver mais manipulação do mesmo.
    // é utilizado o fclose(nome do arq) para fecha-lo.
    fclose(arq);

    return 0;

}