#include <stdio.h>

/* ifndef -  serve para declarar uma constante para que possa ser utilizada em outros códigos.
 A diretiva faz a pergunta "Se não estiver definido" = ifndef ...  Defina apartir de agora o endif serve para 
 finalizar o if.*/

 /*ifdef - serve para utilizar o que já foi declarado no IFNDEF. No teste a baixo é verificado de exite a 
 const PI "Se foi definido" = ifdef efetue o print do PI.*/

#ifndef PI 
    #define PI 3.14567
#endif

int main(){

    int qtd, soma = 0;

    printf("Quantas vezes voce quer somar?");
    scanf("%d", &qtd);
    #ifdef PI

        for(int i = 0; i<qtd; i++){
            soma = soma + (i * 2) + 3;
        }
        printf("A soma é %f:\n", soma);

        printf("O valor de PI é %f:\n", PI);

    #endif
       

    return 0;
}