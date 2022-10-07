/*
Anotações:
int - ocupa 4 bytes -> 0000 0000 0000 0000 0000 0000 0000 0000

- para ver o tamanho em bytes que uma var tem é utilizado a função sizeof, e como auxiliar do print %ld

*/
/*
Ilustações:

pos      0   1   2   3   4
       ---------------------
vet[5] | 1 | 2 | 3 | 4 | 5 |
       ---------------------


*/

#include <stdio.h>

int main () {
    int vet[5] = {1,2,3,4,5};

    for(int i =0; i < 5; i++){
        printf("O valor %d tem %ld bytes\n", vet[i], sizeof(vet[i]));
    }

    printf("Vet[0] vale %d e endereco de memoria e %p\n", vet[0], vet[0]);
    printf("*(vet) vale %d e endereco de memoria e %p\n", *(vet), *(vet));
    // como o verificar componente por componente do vetor...
    printf("*(vet+1) vale %d e endereco de memoria e %p\n", *(vet+1), *(vet+1));

  
    return 0;
}