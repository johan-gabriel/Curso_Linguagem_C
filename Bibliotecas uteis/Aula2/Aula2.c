#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*

string sempre é aspas duplas.

Conversão de string
atof() - converte string para double 
atoi() - converte string para inteiro
atol() - converte string para inteiro longo

Geração sequência pseudo-aleatória

rand() - gera numero aleatorio
srand() - inicializa o gerador de numeros aleatórios


Gerenciamento de memória dinâmica

malloc() - alocação em espaço de memoria - troca o valor do espaço de memória
callod() - "  "  "  " " "  " " " "  "  " ""- troca os valores por zeros.
free() -  libera a memoria
realoc() - modifica o tamanho do valor alocado a memoria.

pesquisa e ordenação

qsort() - organiza os elementos de um array.


*/

int compara(int *x,int *y) {
    if(*x>*y){
        return 1;
    }
    else if (*x == *y){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){

    //char valor_s[500];
    //double valor_d;
    //int valor_i;
    //double valor_li;
    int array[] = {6, 2, 9, 3, 7, 1, 5};

    //time_t t;

    // iniciar o gerador
    //srand((unsigned) time(&t));
    // serve para gerar algumas sequências de randon

    //strcpy(valor_s,"43466666666666666666666666662346.a");

    /*valor_d = atof(valor_s);
    valor_i = atoi(valor_s);
    valor_li = atol(valor_s);

    printf("O valor e %.2f\n",valor_d);
    printf("O valor i e %d\n",valor_i);
   // printf("O valor li e %ld\n",valor_li);*/
    
    for(int i = 0; i < 7; i++){
                                // gera numeros de 0 a 60 ------ 61-1;
        //printf("%d\n", rand() % 61);
        printf("%d\n", array[i]);
    }

    

    return 0;
}