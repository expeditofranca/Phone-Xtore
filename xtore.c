#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<locale.h>// configuração dos caracteres especiais

// Importação dos módulos
#include"clientes.h"
#include"produtos.h"
#include"funcionarios.h"
#include"vendas.h"
#include"relatorios.h"
#include"cabecalhos.h"

/* CRÉDITOS */
// Modelos de menu e cabeçalhos baseados nos modelos do repositório: https://github.com/FlaviusGorgonio/LinguaSolta/blob/main/ls.c

// Assinatura das funções
void cabecalho_principal(void);
void cabecalho_secundario(void);

int tela_menu_principal(void);

void tela_sobre(void);
void tela_equipe(void);

void msg_escolha_invalida(void);
// Fim assinatura das funções

// Programa principal
int main(void) {
  setlocale(LC_ALL, ""); // configuração dos caracteres especiais
  int op = tela_menu_principal();
  while (op != 0) {
    if (op == 1) {
      int op2 = tela_menu_clientes();
      while (op2 != 0) {
        if (op2 == 1) {
          tela_cadastrar_clientes();
        } else if (op2 == 2) {
          tela_pesquisar_clientes();
        } else if (op2 == 3) {
          tela_atualizar_clientes();
        } else if (op2 == 4) {
          tela_deletar_clientes();
        } else {
          msg_escolha_invalida();
        };
        op2 = tela_menu_clientes();
      };
    } else if (op == 2) {
      int op2 = tela_menu_produtos();
      while (op2 != 0) {
        if (op2 == 1) {
          tela_cadastrar_produtos();
        } else if (op2 == 2) {
          tela_pesquisar_produtos();
        } else if (op2 == 3) {
          tela_atualizar_produtos();
        } else if (op2 == 4) {
          tela_deletar_produtos();
        } else {
          msg_escolha_invalida();
        }
        op2 = tela_menu_produtos();
      }
    } else if (op == 3) {
      int op2 = tela_menu_funcionarios();
      while (op2 != 0) {
        if (op2 == 1) {
          tela_cadastrar_funcionarios();
        } else if (op2 == 2) {
          tela_pesquisar_funcionarios();
        } else if (op2 == 3) {
          tela_atualizar_funcionarios();
        } else if (op2 == 4) {
          tela_deletar_funcionarios();
        } else {
          msg_escolha_invalida();
        }
        op2 = tela_menu_funcionarios();
      }
    } else if (op == 4) {
      int op2 = tela_menu_relatorios();
      while (op2 != 0) {
        if (op2 == 1) {
          int op3 = tela_relatorios_clientes();
          while (op3 != 0) {
            if (op3 == 1) {
              tela_relatorio_geral_clientes();
            } else {
              msg_escolha_invalida();
            }
            op3 = tela_relatorios_clientes();
          }
        } else if (op2 == 2) {
          int op3 = tela_relatorios_produtos();
          while (op3 != 0) {
            if (op3 == 1) {
              tela_relatorio_geral_produtos();
            } else {
              msg_escolha_invalida();
            }
            op3 = tela_relatorios_produtos();
          }
        } else if (op2 == 3) {
          int op3 = tela_relatorios_funcionarios();
          while (op3 != 0) {
            if (op3 == 1) {
              tela_relatorio_geral_funcionarios();
            } else {
              msg_escolha_invalida();
            }
            op3 = tela_relatorios_funcionarios();
          }
        } else if (op2 == 4) {
          int op3 = tela_relatorios_vendas();
          while (op3 != 0) {
            if (op3 == 1) {
              tela_relatorio_geral_vendas();
            } else {
              msg_escolha_invalida();
            }
            op3 = tela_relatorios_vendas();
          }
        } else {
          msg_escolha_invalida();
        }
        op2 = tela_menu_relatorios();
      }
    } else if (op == 5) {
      int op2 = tela_menu_vendas();
      while (op2 != 0) {
        if (op2 == 1) {
          int op3 = tela_menu_cadastrar_vendas();
          while (op3 != 0) {
            if (op3 == 1) {
              tela_adicionar_produto_venda();
            } else if (op3 == 2) {
              tela_remover_produto_venda();
            } else if (op3 == 3) {
              printf("Pagamento realizado com sucesso!\n");
            } else if (op3 == 4) {
              printf("Venda cancelada com sucesso!\n");
            } else {
              msg_escolha_invalida();
            }
            op3 = tela_menu_cadastrar_vendas();
          }
        } else if (op2 == 2) {
          tela_pesquisar_vendas();
        } else if (op2 == 3) {
          tela_deletar_vendas();
        } else {
          msg_escolha_invalida();
        }
        op2 = tela_menu_vendas();
      }
    } else if (op == 6) {
      tela_sobre();
    } else if (op == 7) {
      tela_equipe();
    } else {
      msg_escolha_invalida();  
    }
    op = tela_menu_principal();
  }
  return 0;
}
// Fim programa principal

// Tela menu principal
int tela_menu_principal(void){
  int op;
  cabecalho_principal();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///           - - - - Sitema de Gestão de Lojas de Celulares - - - -        ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Módulo Cliente                                            ///\n");
  printf("///           2 - Módulo Produto                                            ///\n");
  printf("///           3 - Módulo Funcionários                                       ///\n");
  printf("///           4 - Módulo Relatórios                                         ///\n");
  printf("///           5 - Módulo Vendas                                             ///\n");
  printf("///           6 - Sobre o Projeto                                           ///\n");
  printf("///           7 - Sobre a Equipe                                            ///\n");
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
// Fim tela menu principal

// Tela sobre o projeto
void tela_sobre(void){
  cabecalho_principal();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         - - - - Sitema de Gestão de Lojas de Celulares - - - -          ///\n");
  printf("///                                                                         ///\n");
  printf("///      Projeto  desenvolvido  para disciplina DCT1106 - Programação do    ///\n");
  printf("///     Bacharelado em Sistemas de Informação da UFRN - CERES Caicó.        ///\n");
  printf("///      O projeto de cunho acadêmico avaliativo  desenvolvido em C  tem    ///\n");
  printf("///     como objetivo auxiliar nos processos administrativos de uma loja    ///\n");
  printf("///     de aparelhos celulares tornando tarefas como registros de vendas,   ///\n");
  printf("///     cadastros, e controle de estoque mais fáceis para o usuário.        ///\n");
  printf("///      Ademais, o  projeto serve como um meio de consolidar o que  foi    ///\n");
  printf("///     aprendido sobre a linguegem C, bem como a capacidade de resolver    ///\n");
  printf("///     problemas e  utilização de lógica de programação em um  contexto    ///\n");
  printf("///     real, assim  servindo também como uma preparação para o  mercado    ///\n");
  printf("///     de trabalho.                                                        ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela sobre o projeto

// Tela sobre a equipe
void tela_equipe(void){
  cabecalho_principal();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///          - - - - Sitema de Gestão de Lojas de Celulares - - - -         ///\n");
  printf("///                                                                         ///\n");
  printf("///                           Desenvolvido por:                             ///\n");
  printf("///                                                                         ///\n");
  printf("///          Expedito Luiz de França Neto                                   ///\n");
  printf("///          E-mail: francaexpedito11@gmail.com                             ///\n");
  printf("///          Redes Sociais: @expeditofranca (Git)                           ///\n");
  printf("///          Repositório: https://github.com/expeditofranca/Phone-Xtore     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela sobre a equipe

void msg_escolha_invalida(void){
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                            Escolha inválida!                            ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n\n");
}