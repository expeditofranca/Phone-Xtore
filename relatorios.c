#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"clientes.h"
#include"funcionarios.h"
#include"produtos.h"
#include"vendas.h"

// Módulo relatórios
// Tela menu relatorios
int tela_menu_relatorios(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                       - - - - Menu Relatórios - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatórios de Clientes                                    ///\n");
  printf("///           2 - Relatórios de Produtos                                    ///\n");
  printf("///           3 - Relatórios de Funcionários                                ///\n");
  printf("///           4 - Relatórios de Vendas                                      ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela menu relatorios

// Tela relatórios clientes
int tela_relatorios_clientes(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Clientes - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Clientes                               ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela relatórios clientes

// Tela relatório geral de clientes
void tela_relatorio_geral_clientes(void){
  FILE *fp;
  Cliente* cliente;
  fp = fopen("clientes.dat", "rb");
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Clientes - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  while(fread(cliente, sizeof(Cliente), 1, fp)){
    printf("Nome: %s\n", cliente->nome);
    printf("CPF: %s\n", cliente->cpf);
    printf("Telefone: %s\n", cliente->tel);
    printf("E-mail: %s\n", cliente->email);
    printf("Status: %s\n", cliente->status);
    printf("Id: %s\n", cliente->id);
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de clientes

// Tela relatórios produtos
int tela_relatorios_produtos(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Produtos - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Produtos                               ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela relatórios produtos

// Tela relatório geral de produtos
void tela_relatorio_geral_produtos(void){
  FILE *fp;
  Produto* produto;
  fp = fopen("produtos.dat", "rb");
  produto = (Produto*) malloc(sizeof(Produto));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Produtos - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  
  while(fread(produto, sizeof(Produto), 1, fp)){
    printf("Marca: %s\n", produto->marca);
    printf("Modelo: %s\n", produto->modelo);
    printf("Preço: %s\n", produto->preco);
    printf("Estoque: %s\n", produto->estoque);
    printf("Status: %s\n", produto->status);
    printf("Id: %s\n", produto->codigo);
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de produtos

// Tela relatórios funcionários
int tela_relatorios_funcionarios(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Funcionários - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Funcionários                               ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela relatórios funcionários

// Tela relatório geral de funcionários
void tela_relatorio_geral_funcionarios(void){
  FILE *fp;
  Funcionario* funcionario;
  fp = fopen("funcionarios.dat", "rb");
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Funcionarios - - - -           ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  
  while(fread(funcionario, sizeof(Funcionario), 1, fp)){
    printf("Nome: %s\n", funcionario->nome);
    printf("CPF: %s\n", funcionario->cpf);
    printf("Telefone: %s\n", funcionario->tel);
    printf("E-mail: %s\n", funcionario->email);
    printf("Status: %s\n", funcionario->status);
    printf("Id: %s\n", funcionario->id);
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de produtos

// Tela relatórios vendas
int tela_relatorios_vendas(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Vendas - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Vendas                                 ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela relatórios vendas

// Tela relatório geral de vendas
void tela_relatorio_geral_vendas(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Vendas - - - -                 ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de vendas
// Fim módulo relatórios