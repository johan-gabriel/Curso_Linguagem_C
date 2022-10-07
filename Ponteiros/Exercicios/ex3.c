#include <stdio.h>

int main(){

    int n, n2, teste;
    
    printf("Digite o valor de n e n2:");
    scanf("%d", &n);
    scanf("%d", &n2);

    printf("Valores de n: %d, n2: %d\n", n, n2);
    printf("Enderços de n: %d, n2: %d\n", &n, &n2);
    // faz função matemática com o valor do registrador...
    teste = &n - &n2;

    if (teste > 0)
    {
       printf("n: %d\n",  n);
       printf("n2: %d\n",  n2);
    }else{
        printf("n2: %d\n",  n2);
       printf("n: %d\n",  n);
    }

    return 0;
}