#include <stdio.h>

int main() {
    char nome[100], cpf[12], email[100], telefone[15];
    char ticket[10];
    char resposta1, resposta2, resposta3, resposta4, resposta5, resposta6;
    int avaliacao;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu CPF: ");
    fgets(cpf, sizeof(cpf), stdin);

    printf("Digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);

    printf("Digite seu numero de telefone: ");
    fgets(telefone, sizeof(telefone), stdin);

    printf("\nOpcoes de compra de tickets:\n");
    printf("1. Ticket inteira\n");
    printf("2. Ticket meia\n");

    printf("\nEscolha uma opcao (1 ou 2): ");
    fgets(ticket, sizeof(ticket), stdin);

    printf("\nAvalie o sistema em uma escala de 1 a 10: ");
    scanf("%d", &avaliacao);

    FILE *arquivo = fopen("informacoes.txt", "w");
    if (arquivo == NULL) {
        printf("Não foi possível criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Nome: %s", nome);
    fprintf(arquivo, "CPF: %s", cpf);
    fprintf(arquivo, "E-mail: %s", email);
    fprintf(arquivo, "Telefone: %s", telefone);
    fprintf(arquivo, "Ticket escolhido: %s", ticket);
    fprintf(arquivo, "Avaliação do sistema: %d", avaliacao);

    fclose(arquivo);

    printf("\nSuas informações foram armazenadas no arquivo informacoes.txt.\n");
    printf("\nObrigado e boa visita!\n");

    return 0;
}