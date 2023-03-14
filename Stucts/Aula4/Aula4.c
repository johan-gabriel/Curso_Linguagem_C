#include <stdio.h>

//Enum -> Enumeração 
// Tipo de dado constates;

enum dias_semana{
    domingo,//0
    segunda,//1
    terca,//2
    quarta,//3
    quinta,//4
    sexta,//5
    sabado//6
};

int main(){
    
    enum dias_semana d1, d2;

    d1 =  quinta;
    d2 = 4;

    if (d1 == d2)
    {
        printf("Os dias são iguais...");
    }else{
        printf("Os dias não são iguais ...");
    }
    
    return 0;
}