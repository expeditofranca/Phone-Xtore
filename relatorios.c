#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"

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
  printf("///           3 - Relatórios de Vendas                                      ///\n");
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
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Clientes - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
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
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Produtos - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
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