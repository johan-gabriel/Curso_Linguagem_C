#include <stdio.h>

int negativos(float *pf, int N){
    float log;
    for (int i = 0; i < N; i++)
    {
        log = pf[i];

        if (log < 0 )
        {
            printf("Valor: %f\n", log);
        }
        
    }
    

    
}

int main(){

    const int I = 5;
    float f[5] = {-1.11,2,3.22,-6.233,-10.231};

    negativos(f, I);


    return 0;
}