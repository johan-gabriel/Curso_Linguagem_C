#include <stdio.h>
/* Recursividade é um metodo de loop em que se utiliza uma função(método) para executar a si mesma.

Fibonat? 5 primeiros numeros
1 1 2 3 5 - soma sempre com o anterior!

*/



int contador = 1;

int fib(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
    
}

int main() {
    
    int contador;

    printf("Informe o tamanho da sequencica: ");
    scanf("%d", &contador);

    for (int i = 0; i < contador; i++)
    {
        printf("%d ",fib(i + 1));
    }
    
    return 0;
}