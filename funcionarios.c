#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"funcionarios.h"

#define True 1
#define False 0

typedef struct funcionario Funcionario;

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
  Funcionario *funcionario;
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));
  FILE* fp;
  fp = fopen("funcionarios.dat", "ab");

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                  - - - - Cadastrar Funcionário - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  printf("Nome: ");
  scanf("%s", funcionario->nome);
  getchar();
  while(!validaNome(funcionario->nome)){
    printf("Nome inválido! Digite novamente: ");
    scanf("%s", funcionario->nome);
    getchar();
  }

  printf("CPF:(Só números) ");
  scanf("%s", funcionario->cpf);
  getchar();
  while(!validaCPF(funcionario->cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", funcionario->cpf);
    getchar();
  }

  printf("Telefone:(Só números) ");
  scanf("%s", funcionario->tel);
  getchar();
  while(!validaTel(funcionario->tel)){  
    printf("Telefone inválido! Digite novamente: ");
    scanf("%s", funcionario->tel);
    getchar();
  }

  printf("E-mail: ");
  scanf("%s", funcionario->email);
  getchar();
  while(!validaEmail(funcionario->email)){
    printf("Email inválido! Digite novamente: ");
    scanf("%s", funcionario->email);
    getchar();
  }
  funcionario->status = '1';

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  if(fread(funcionario, sizeof(Funcionario), 1, fp) == False){
    strcpy(funcionario->id, "1");
  }

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
  char* cpf;
  cpf = (char*) malloc(12*sizeof(char));
  FILE* fp;
  fp = fopen("funcionarios.dat", "rb");
  Funcionario* funcionario;
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                 - - - - Pesquisar Funcionário - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(só números)\n");
  scanf("%s", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente:\n");
    scanf("%s", cpf);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }
  while(fread(funcionario, sizeof(Funcionario), 1, fp)){
    if ((strcmp(funcionario->cpf, cpf) == False) && (funcionario->status == '1')){
      fclose(fp);
      printf("CPF: %s\n", funcionario->cpf);
      printf("Nome: %s\n", funcionario->nome);
      printf("E-mail: %s\n", funcionario->email);
      printf("Telefone: %s\n", funcionario->tel);
      printf("Id: %s\n", funcionario->id);
      printf("Status: %c\n", funcionario->status);
    }
  }
  
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
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela atualizar funcionário

// Tela deletar funcionário
void tela_deletar_funcionarios(void){
  char* cpf;
  cpf = (char*) malloc(12*sizeof(char));
  FILE* fp;
  fp = fopen("funcionarios.dat", "rb");
  FILE* f;
  f = fopen("temp.dat", "wb");
  Funcionario* funcionario;
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));
  
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Funcionário - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(só números) ");
  scanf("%s", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cpf);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(funcionario, sizeof(Funcionario), 1, fp)){
    if(strcmp(funcionario->cpf, cpf) != 0){
      fwrite(funcionario, sizeof(Funcionario), 1, f);
    }
  }

  free(funcionario);
  free(cpf);
  fclose(fp);
  fclose(f);

  remove("funcionarios.dat");
  rename("temp.dat", "funcionarios.dat");

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar funcionário
// Fim módulo funcionários