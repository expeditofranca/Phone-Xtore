#include<stdio.h>
#include"cabecalhos.h"
#include"util.h"

// Módulo funcionários
// Tela menu funcionários
int tela_menu_funcionarios(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                      - - - - Menu Funcionário - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Cadastrar Funcionário                                     ///\n");
  printf("///           2 - Pesquisar Funcionário                                     ///\n");
  printf("///           3 - Atualizar Funcionário                                     ///\n");
  printf("///           4 - Deletar Funcionário                                       ///\n");
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
// Fim tela menu funcionários

// Tela cadastrar funcionário
void tela_cadastrar_funcionarios(void){
  int saida = 1;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                  - - - - Cadastrar Funcionário - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  char nome[60];
  char cpf[12];
  char tel[12];
  char email[50];
  while(saida){
    while(saida){
      printf("Nome: \n");
      scanf("%s", nome);
      if(!validaNome(nome)){
        printf("Nome inválido! Digite novamente");
      } else {
        saida = 0;
      }
    }

    saida = 1;
    while(saida){
      printf("CPF:(Só números) \n");
      scanf("%s", cpf);
      if(!validaCPF(cpf)){
        printf("CPF inválido! Digite novamente");
      } else {
        saida = 0;
      }
    }

    saida = 1;
    while(saida){  
      printf("Telefone:(Só números) \n");
      scanf("%s", tel);
      if(!validaTel(tel)){
        printf("Telefone inválido! Digite novamente");
      } else {
        saida = 0;
      }
    }

    saida = 1;
    while(saida){
      printf("E-mail: \n");
      scanf("%s", email);
      if(!validaEmail(email)){
        printf("Email inválido! Digite novamente");
      } else {
        saida = 0;
      }
    }
    printf("\n");
  }

  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar funcionário

// Tela pesquisar fucionário
void tela_pesquisar_funcionarios(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                 - - - - Pesquisar Funcionário - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar funcionário

// Tela atualizar funcionário
void tela_atualizar_funcionarios(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Atualizar Funcionário - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela atualizar funcionário

// Tela deletar funcionário
void tela_deletar_funcionarios(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Funcionário - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar funcionário
// Fim módulo funcionários