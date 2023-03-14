#include <stdio.h>
#include <string.h>

union numeros 
{
    int num1, num2, num3,num4,num5;
}n;

int main(){
    
    int soma = 0;

    n.num1 = 1;
    soma = soma + n.num1;
    printf("O Valor de Num1 nao Sobreescrito %d\n", n.num1);
    n.num2 = 3;
    soma = soma + n.num2;
    printf("O Valor de Num2 nao Sobreescrito %d\n", n.num2);
    n.num3 = 5;
    soma = soma + n.num3;
    printf("O Valor de Num3 nao Sobreescrito %d\n", n.num3);
    n.num4 = 7;
    soma = soma + n.num4;
    printf("O Valor de Num4 nao Sobreescrito %d\n", n.num4);
    n.num5 = 9;
    soma = soma + n.num5;
    printf("O Valor de Num5 nao Sobreescrito %d\n", n.num5);

    printf("O Valor de Num1 Sobreescrito %d\n", n.num1);
    printf("O Valor de Num2 Sobreescrito %d\n", n.num2);
    printf("O Valor de Num3 Sobreescrito %d\n", n.num3);
    printf("O Valor de Num4 Sobreescrito %d\n", n.num4);
    printf("O Valor de Num5 Sobreescrito %d\n", n.num5);
    printf("Soma %d esta ocupando %ldbytes em mem\n", soma, sizeof(soma));

    printf("N esta ocupando %ldbytes em mem", sizeof(n));
    return 0;
}
