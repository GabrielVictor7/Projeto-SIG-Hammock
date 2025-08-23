#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "clientes.h"




void menu_clientes(void){
    char op_cliente;
    system("clear || cls");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║               Módulo De Clientes                ║\n");
    printf("╠═════════════════════════════════════════════════╣\n");
    printf("║ 1 - Cadastrar Cliente                           ║\n");
    printf("║ 2 - Exibir Clientes                             ║\n");
    printf("║ 3 - Editar Cliente                              ║\n");
    printf("║ 4 - Excluir Cliente                             ║\n");
    printf("║                                                 ║\n");
    printf("║ 0 - Voltar                                      ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");
    printf("\n");
    printf("Pressione 0 para voltar à tela inicial: ");
    scanf(" %c", &op_cliente);
}


char cadastrar_clientes(void){

    char nome[50];
    char cpf[12];
    char telefone[9];
    char email[21];

    system("clear || cls");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║               Cadastro de Clientes              ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");
    printf(" Digite o nome do cliente: ");
    scanf("%50s\n", nome);
    getchar();
    printf(" Digite o CPF do cliente: ");
    scanf("%12s\n", cpf);
    getchar();
    printf(" Digite o telefone do cliente: ");
    scanf("%10s\n", telefone);
    getchar();
    printf(" Digite o email do cliente: ");
    scanf("%21s\n", email);
    getchar();

    printf("Cliente cadastrado com sucesso!\n");

    printf("Nome: %s\n", nome);
    printf("CPF: %s\n", cpf);
    printf("Telefone: %s\n", telefone);
    printf("Email: %s\n", email);
}

void exibir_cliente(void){
    char cpf[12];
    system("clear || cls");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║                 Pesquisar Cliente               ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");
    printf(" Digite o CPF do cliente que deseja buscar: ");
    scanf("%s\n", cpf);
    getchar();
    // printf("Nome: %s\n", nome);
    // printf("CPF: %s\n", cpf);
    // printf("Telefone: %s\n", telefone);
    // printf("Email: %s\n", email);
}


void alterar_cliente(void){
    char cpf[12];
    system("clear || cls");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║                 Alterar Cliente                 ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");
    printf(" Digite o CPF do cliente que deseja buscar: ");
    scanf("%s\n", cpf);
    getchar();
    // printf("Nome: %s\n", nome);
    // printf("CPF: %s\n", cpf);
    // printf("Telefone: %s\n", telefone);
    // printf("Email: %s\n", email);
}

void excluir_cliente(void){
    char cpf[12];
    system("clear || cls");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║                  Excluir Cliente                ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");
    printf(" Digite o CPF do cliente que deseja buscar: ");
    scanf("%s\n", cpf);
    getchar();
    // printf("Nome: %s\n", nome);
    // printf("CPF: %s\n", cpf);
    // printf("Telefone: %s\n", telefone);
    // printf("Email: %s\n", email);
}