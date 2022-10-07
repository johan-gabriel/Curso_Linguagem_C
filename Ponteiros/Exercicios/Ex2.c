#include <stdio.h>

int main(){

    int n = 5, n2 = 18, teste;
    

    printf("Valores iniciais para n: %d, n2: %d\n", &n, &n2);

    teste = &n - &n2;

    if (teste > 0)
    {
       printf("n: %d\n",  &n);
       printf("n2: %d\n",  &n2);
    }else{
        printf("n2: %d\n",  &n2);
       printf("n: %d\n",  &n);
    }
    

   

    



    return 0;
}