#include <stdio.h>
#include <math.h>
int raizes(float A, float B, float C, float* X1, float* X2);

int main(){
    float A,B,C,x1,x2,x;

    printf("Quanto vale o valor de A:");
    scanf("%f", &A);
     printf("Quanto vale o valor de B:");
    scanf("%f", &B);
     printf("Quanto vale o valor de C:");
    scanf("%f", &C);

    if (A == 0)
    {
        printf("'A' nao pode ser igual a zero.... Gigite o valor de A:");
        scanf("%f", &A);
    }

    printf("Sua equacao e: %.2fx^2 + %.2fx + %.2f\n", A,B,C);

    raizes(A,B,C,&x1,&x2);
    
    printf("X1: %f, X2: %f", x1,x2);


   

    return 0;
}
int raizes(float A, float B, float C, float* X1, float* X2){

    float delta = 0;
    float invert = -1.000;

    delta = (pow(B,2)) - (4*A*C);

    printf("Delta e: %f\n",delta);

    int comparador  = delta;
    printf("Comparador: %d\n", comparador);

    if (delta < 0)
    {   printf("Foi delta < 0\n");
        *X1 = ((invert*B) + sqrt(invert*delta))/(2*A);

        *X2 = ((invert*B) - sqrt(invert*delta))/(2*A);
    }

    if (comparador == 0)
    {   printf("Foi delta = 0\n");
        *X1 = ((invert*B) + sqrt(delta))/(2*A);
        *X2 = *X1 * invert;
    }

    if (delta > 0)
    {   printf("Foi delta > 0\n");
        *X1 = ((invert*B) + sqrt(delta))/(2*A);
        *X2 = ((invert*B) - sqrt(delta))/(2*A);
    }
    
    
    



}
