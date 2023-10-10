#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"

// Módulo clientes
// Tela menu clientes
int tela_menu_clientes(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                        - - - - Menu Cliente - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Cadastrar Cliente                                         ///\n");
  printf("///           2 - Pesquisar Cliente                                         ///\n");
  printf("///           3 - Atualizar Cliente                                         ///\n");
  printf("///           4 - Deletar Cliente                                           ///\n");
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
// Fim tela menu clientes

// Tela cadastrar cliente
void tela_cadastrar_clientes(void){
  int saida = 1;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Cliente - - - -                    ///\n");
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
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar cliente

// Tela pesquisar cliente
void tela_pesquisar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar cliente

// Tela atualizar cliente
void tela_atualizar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Atualizar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela atualizar cliente

// Tela deletar cliente
void tela_deletar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Cliente - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar cliente
// Fim módulo clientes