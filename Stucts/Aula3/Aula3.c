#include <stdio.h>
#include <string.h>
// Union
//Utiliza apenas o espaço da maior variável.
union pessoa{
    char nome [100]; // 1char = 1byte -> 1*100 = 100bytes
    int idade;//4 bytes - >
    // total 104 bytes
};
/*Fora isso! Esse método utiliza a sobreescrita no epaço da memória, por exemplo, se eu trocar o valor da var 
durante o processo, esse valor será apagado.*/
int main (){
    
    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double nota2 = 19.4;
    
    union pessoa pes;
    //função string copy!
    strcpy(pes.nome,"Angelina Jolie");


    printf("Var Numero = %d e ocupa %ldbytes em memoria\n", numero, sizeof(numero));
    printf("Var Nota = %.2f e ocupa %ldbytes em memoria\n", nota,sizeof(nota) );
    printf("Var Letra = %c e ocupa %ldbytes em memoria\n", letra, sizeof(letra));
    printf("Var Nota 2 = %.2f e ocupa %ldbytes em memoria\n", nota2, sizeof(nota2));
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos \n", pes.idade);

    printf("A var pes esta ocupando %ldbytes em memoria.", sizeof(pes));

    return 0;
}