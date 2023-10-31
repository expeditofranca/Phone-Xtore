#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"funcionarios.h"

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
  FILE* fp;
  Funcionario* funcionario;
  fp = fopen("funcionarios.dat", "ab");
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                  - - - - Cadastrar Funcionário - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  char nome[61];
  char cpf[12];
  char tel[12];
  char email[51];

  printf("Nome: \n");
  scanf("%s", nome);
  while(!validaNome(nome)){
    printf("Nome inválido! Digite novamente:\n");
    scanf("%s", nome);
  }
  strcpy(funcionario->nome, nome);

  printf("CPF:(Só números) \n");
  scanf("%s", cpf);
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente:\n");
    scanf("%s", cpf);
  }
  strcpy(funcionario->cpf, cpf);

  printf("Telefone:(Só números) \n");
  scanf("%s", tel);
  while(!validaTel(tel)){  
    printf("Telefone inválido! Digite novamente:\n");
    scanf("%s", tel);
  }
  strcpy(funcionario->tel, tel);

  printf("E-mail: \n");
  scanf("%s", email);
  while(!validaEmail(email)){
    printf("Email inválido! Digite novamente:\n");
    scanf("%s", email);
  }
  strcpy(funcionario->email, email);

  strcpy(funcionario->status, "1\n");

  fwrite(funcionario, sizeof(Funcionario), 1, fp);
  fclose(fp);
  free(funcionario);

  printf("\n");
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