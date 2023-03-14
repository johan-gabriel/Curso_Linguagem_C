#include <stdio.h>
// Biblioteca de entrada  e saída;
//Função: Acessar os arquivos do pc;

/*
Funções da biblioteca:
fclose() - fecha o arquivo após sua abertura.
fflush() - limpa o buffer. (corrige um bug no sistema.)
fopen() - abre um arquivo.

fsacnf() - Entrada
printf() - saida
scanf() - Entrada
getc() - entrada

fputs() - string no arquivo
getchar() - Lê um caracter da entrada
fgets() - lê string da entrada padrão

feof() - acha o end do file;


Macros:
FILE - tipo de dado
EOF -  fim do arquivo
NUll - Nulo.
*/

int main(){

    int num1, num2, soma;

    printf("Informe o Numero1: ");
    fflush(stdout);
    scanf("%d",&num1);

    printf("Informe o Numero2: ");
    scanf("%d",&num2);

    soma = num1 + num2;

    printf("A soma de %d com %d erro: %d\n",num1,num2,soma);


    return 0;
}