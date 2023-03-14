#include <stdio.h>

//Struct -> estrutura

// Utilizamos variáveis para guardar dados, as structs guardam dados estruturados.


struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int nascimento;
//variável para a struct.
};

struct st_carro
{
    char pneu [50];
    char modelo[200];
    float kilometro;
    int ano;
// essa maneira também serve para declarar  a var da struct.
}carros[5];


struct st_contato
{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda
{
    struct st_contato contatos[1000];

}agenda;



int main(){
// maneira de declarar a var da struct.
    struct st_aluno aluno1;

    printf("Informe a matricula: ");
    fgets(aluno1.matricula, 10 ,stdin);

    printf("Informe o nome: ");
    fgets(aluno1.nome, 100 ,stdin);

    printf("Informe o curso: ");
    fgets(aluno1.curso, 50 ,stdin);

    printf("Informe data de nascimento: ");
    scanf("%d", &aluno1.nascimento);
    getchar();

    printf("=============== Dados do Aluno ==================\n");
    printf("Matricula: %s", aluno1.matricula);
    printf("Nome: %s", aluno1.nome);
    printf("Curso: %s", aluno1.curso);
    printf("Data de Nascimento: %d\n", aluno1.nascimento);
    


    for (int i = 0; i < 3; i++)
    {
        printf("Informe o pneu: ");
        fgets(carros[i].pneu, 50 ,stdin);

        printf("Informe o modelo: ");
        fgets(carros[i].modelo, 200 ,stdin);

        printf("Informe o kilometro: ");
        scanf("%f",&carros[i].kilometro);

        printf("Informe o ano do carro: ");
        scanf("%d", &carros[i].ano);
        getchar();// Para não segurar a informação do scanf!
    }
    for (int i = 0; i < 3; i++)
    {
        printf("=============== Dados dos Carros ==================");
        printf("Pneu: %s", carros[i].pneu);
        printf("Modelo: %s", carros[i].modelo);
        printf("Kilometro: %s", carros[i].kilometro);
        printf("Ano: %d", carros[i].ano);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Nome do contato: ");
        fgets(agenda.contatos[i].nome, 100 ,stdin);

        printf("Informe ano de nascimeto: ");
        scanf("%d",&agenda.contatos[i].ano_nascimento);
        getchar();

        printf("Informe o Telefone: ");
        fgets(agenda.contatos[i].telefone, 20 ,stdin);

        printf("Informe o Email: ");
        fgets(agenda.contatos[i].email, 100 ,stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("=============== Dados Da Agenda ==================");
        printf("Contato: %s", agenda.contatos[i].nome);
        printf("Ano de nascimento: %d", agenda.contatos[i].ano_nascimento);
        printf("Teleone: %s", agenda.contatos[i].telefone);
        printf("Email: %s", agenda.contatos[i]);
    }

    return 0;
}