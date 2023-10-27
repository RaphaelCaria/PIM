#include <stdio.h>

int main() {
    char nome[100],resposta1, resposta2, resposta3, resposta4, resposta5, resposta6;
    int avaliacao;

     printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\n150 anos de Santos Dumont\n");

    printf("\n1. Quando e onde nasceu Santos Dumont?\n");
    printf("a) Em 20 de julho de 1873, em Sao Paulo.\n");
    printf("b) Em 20 de julho de 1873, em Minas Gerais.\n");
    printf("c) Em 20 de julho de 1873, no Rio de Janeiro.\n");
    printf("Resposta: ");
    scanf(" %c", &resposta1);

    if(resposta1 == 'b') {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    printf("\n2. Qual foi a invencao mais famosa de Santos Dumont?\n");
    printf("a) O aviao Demoiselle.\n");
    printf("b) O relogio de pulso.\n");
    printf("c) O dirigivel.\n");
    printf("Resposta: ");
    scanf(" %c", &resposta2);

    if(resposta2 == 'a') {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    printf("\n3. Qual foi o objetivo principal de Santos Dumont ao inventar o aviao?\n");
    printf("a) Criar uma maquina voadora que pudesse ser usada na guerra.\n");
    printf("b) Desenvolver um meio de transporte mais rapido e eficiente.\n");
    printf("c) Promover a amizade e a cooperacao entre as nacoes.\n");
    printf("Resposta: ");
    scanf(" %c", &resposta3);

    if(resposta3 == 'b') {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    printf("\n4. Quando e onde ocorreu a Semana de Arte Moderna?\n");
    printf("a) Em 1922, no Teatro Municipal de São Paulo.\n");
    printf("b) No ano de 1922, no Rio de Janeiro.\n");
    printf("c) Em 1923, no Teatro Municipal de Sao Paulo.\n");
    printf("d) No ano de 1923, no Rio de Janeiro.\n");
    printf("Resposta: ");
    scanf(" %c", &resposta4);

    if(resposta4 == 'a') {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    printf("\n5. Quais foram as diferentes manifestações culturais presentes na Semana de Arte Moderna?\n");
    printf("a) Pintura e escultura.\n");
    printf("b) Música e poesia.\n");
    printf("c) Dança e teatro.\n");
    printf("d) Todas as opcoes anteriores.\n");
    printf("Resposta: ");
    scanf(" %c", &resposta5);

    if(resposta5 == 'd') {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    printf("\n6. Qual foi o objetivo da Semana de Arte Moderna?\n");
    printf("a) Promover a arte acadêmica.\n");
    printf("b) Celebrar a arte clássica.\n");
    printf("c) Introduzir o modernismo no Brasil.\n");
    printf("d) Todas as opções anteriores.\n");
    printf("Resposta: ");
    scanf(" %c", &resposta6);

    if(resposta6 == 'c') {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    printf("\nAvalie o sistema em uma escala de 1 a 10: ");
    scanf("%d", &avaliacao);

    FILE *arquivo = fopen("informacoes.txt", "w");
    if (arquivo == NULL) {
        printf("Não foi possível criar o arquivo.\n");
        return 1;
    }
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Respostas:\n");
    fprintf(arquivo, "1. Quando e onde nasceu Santos Dumont? Resposta: %c\n", resposta1);
    fprintf(arquivo, "2. Qual foi a invenção mais famosa de Santos Dumont? Resposta: %c\n", resposta2);
    fprintf(arquivo, "3. Qual foi o objetivo principal de Santos Dumont ao inventar o avião? Resposta: %c\n", resposta3);
    fprintf(arquivo, "4. Quando e onde ocorreu a Semana de Arte Moderna? Resposta: %c\n", resposta4);
    fprintf(arquivo, "5. Quais foram as diferentes manifestações culturais presentes na Semana de Arte Moderna? Resposta: %c\n", resposta5);
    fprintf(arquivo, "6. Qual foi o objetivo da Semana de Arte Moderna? Resposta: %c\n", resposta6);

    printf("\nSuas informações foram armazenadas no arquivo informacoes.txt.\n");
    printf("\nObrigado pela visita ao nosso Museu!\n");

}