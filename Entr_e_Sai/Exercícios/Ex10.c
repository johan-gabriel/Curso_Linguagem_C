#include <stdio.h>

int main(){

    FILE *arq;
    char cidades[100], c, *resultado, numero[7];
    float habit;
    int a, aux = 0, contador = 0, armazena[4]; 


    //            Nome do arq , tipo de abertura
    //                           w - abrir o arquivo para escrita (O conteudo será sobrescristo);
    //                           r - abrir o arquivo para leitura
    //                           a - abrir o arquivo para adcionar um conteúdo (se o arquivo tiver um conteudo, será adcionado um novo)
    arq =  fopen("entrada.txt", "w");
    // verificação se é nulo
    if (arq)
    { 
        printf("Achei o arquivo ....\n");
        printf("Informe o nome de uma cidade: ");
        fgets(cidades, 100, stdin); // stdin = standard input -> entrada padão;
        while (cidades[0] != '0')
        {   
            fputs(cidades, arq);
            printf("Informe o nome de uma cidade: ");
            fgets(cidades, 100, stdin);
        }     
    }
    else{

        printf("Não foi possivel criar o arquivo...\n");
    }
    // Sempre fechar o arquivo quando não houver mais manipulação do mesmo.
    // é utilizado o fclose(nome do arq) para fecha-lo.
    fclose(arq);

    arq =  fopen("entrada.txt", "r");
    // verificação se é nulo
    if (arq)
    { 
        while (!feof(arq))
        {   
            c = getc(arq);
            //printf("Valor dos dados %c \n", c);

            if (c=='-')
            {
                printf("Achei o -!\n");
                a = 1;
                
            }
            if (a == 1)
            {
                //printf("%c", c);
                contador++;
                //printf("Contador: %d", contador);

                numero[contador]=c;

                printf("Numero: %c Pos: %d\n", numero[contador], contador);

            }
            if (c=='\n')
            {
                contador = 0;
                a = 0;
            }
            
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