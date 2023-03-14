#include <stdio.h>

struct st_horario
{
   int hora;
   int min;
   int seg;
//variável para a struct.
}horas;

struct st_data
{
    int dia;
    char mes[100];
    int meses;
    int ano;
// essa maneira também serve para declarar  a var da struct.
}calen;


struct st_compromisso
{  char nomeEv[200];
   char data[50];
   char horario[50];
   char text[1000];
}comp;

int main(){
// maneira de declarar a var da struct.

    printf("Qual o nome do compromisso?");
    fgets(comp.nomeEv, 200, stdin);


    printf("*************** %s ******************\n",comp.nomeEv);

    printf("Horario do compromisso...");
    scanf("%d",&horas.hora);
    getchar();
      if (horas.hora > 23)
    {
        printf("Horário não existente\n");
        printf("Horario do compromisso...");
        scanf("%d",&horas.hora);
        getchar();
    }
    

    printf("Minuto do compromisso...");
    scanf("%d",&horas.min);
    getchar();
       if (horas.min > 59)
    {
        printf("minuto não existente\n");
        printf("Minuto do compromisso...");
        scanf("%d",&horas.min);
        getchar();
    }
    printf("Segundos do compromisso...");
    scanf("%d",&horas.seg);
    getchar();
           if (horas.seg > 59)
    {
        printf("segundos não existente\n");
        printf("segundos do compromisso...");
        scanf("%d",&horas.seg);
        getchar();
    }

   
    printf("Dia do compromisso...");
    scanf("%d",&calen.dia);
    getchar();
      if (calen.dia > 31)
    {
        printf("Dia não existente\n");
        printf("Dia do compromisso...");
        scanf("%d",&calen.dia);
        getchar();
    }
    

    printf("Mes do compromisso...");
    scanf("%d",&calen.meses);
    getchar();
       if (calen.meses > 12)
    {
        printf("Mes não existente\n");
        printf("Mes do compromisso...");
        scanf("%d",&calen.meses);
        getchar();
    }
    printf("Ano do compromisso...");
    scanf("%d",&calen.ano);
    getchar();

    if (calen.meses == 1)
    {
        calen.mes[0]='J';
        calen.mes[1]='a';
        calen.mes[2]='n';
        calen.mes[3]='e';
        calen.mes[4]='i';
        calen.mes[5]='r';
        calen.mes[6]='o';
    }
    if (calen.meses == 2)
    {
        calen.mes[0]='F';
        calen.mes[1]='e';
        calen.mes[2]='v';
        calen.mes[3]='e';
        calen.mes[4]='r';
        calen.mes[5]='e';
        calen.mes[6]='i';
        calen.mes[7]='r';
        calen.mes[8]='o';
    }
    
    if (calen.meses == 3)
    {
        calen.mes[0]='M';
        calen.mes[1]='a';
        calen.mes[2]='r';
        calen.mes[3]='ç';
        calen.mes[4]='o';
        
    }
    if (calen.meses == 4)
    {
        calen.mes[0]='A';
        calen.mes[1]='b';
        calen.mes[2]='r';
        calen.mes[3]='i';
        calen.mes[4]='l';
       
    }
    if (calen.meses == 5)
    {
        calen.mes[0]='M';
        calen.mes[1]='a';
        calen.mes[2]='i';
        calen.mes[3]='o';
    }
    if (calen.meses == 6)
    {
        calen.mes[0]='J';
        calen.mes[1]='u';
        calen.mes[2]='n';
        calen.mes[3]='h';
        calen.mes[4]='o';
       
    }
     if (calen.meses == 7)
    {
        calen.mes[0]='J';
        calen.mes[1]='u';
        calen.mes[2]='l';
        calen.mes[3]='h';
        calen.mes[3]='o';
    }
    if (calen.meses == 8)
    {
        calen.mes[0]='A';
        calen.mes[1]='g';
        calen.mes[2]='o';
        calen.mes[3]='s';
        calen.mes[4]='t';
        calen.mes[5]='o';
    }
    if (calen.meses == 9)
    {
        calen.mes[0]='S';
        calen.mes[1]='e';
        calen.mes[2]='t';
        calen.mes[3]='e';
        calen.mes[4]='m';
        calen.mes[5]='b';
        calen.mes[6]='r';
        calen.mes[7]='o';
       
    }
    if (calen.meses == 10)
    {
        calen.mes[0]='O';
        calen.mes[1]='u';
        calen.mes[2]='t';
        calen.mes[3]='u';
        calen.mes[4]='b';
        calen.mes[5]='r';
        calen.mes[6]='o';
       
    }
    if (calen.meses == 11)
    {
        calen.mes[0]='N';
        calen.mes[1]='o';
        calen.mes[2]='v';
        calen.mes[3]='e';
        calen.mes[4]='m';
        calen.mes[5]='b';
        calen.mes[6]='r';
        calen.mes[7]='o';
       
    }
    if (calen.meses == 12)
    {
        calen.mes[0]='D';
        calen.mes[1]='e';
        calen.mes[2]='z';
        calen.mes[3]='e';
        calen.mes[4]='m';
        calen.mes[5]='b';
        calen.mes[6]='r';
        calen.mes[7]='o';
       
    }
    printf("Insira algum texto descritivo: ");
    fgets(comp.text,1000,stdin);

    printf("Compromisso: \n");
    printf("%s\n",calen.mes);
    printf("%d/%d/%d\n",calen.dia,calen.meses,calen.ano);
    printf("Horario: %d:%d:%d\n",horas.hora,horas.min,horas.seg);
    printf("Descrição: %s",comp.text);
    return 0;
}