#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"clientes.h"

#define True 1
#define False 0

typedef struct cliente Cliente;

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
  Cliente *cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));
  FILE *fp;
  fp = fopen("clientes.dat", "ab");
  

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  printf("Nome: ");
  scanf("%s", cliente->nome);
  getchar();
  while(!validaNome(cliente->nome)){
    printf("Nome inválido! Digite novamente: ");
    scanf("%s", cliente->nome);
    getchar();
  }

  printf("CPF:(Só números) ");
  scanf("%s", cliente->cpf);
  getchar();
  while(!validaCPF(cliente->cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cliente->cpf);
    getchar();
  }

  printf("Telefone:(Só números) ");
  scanf("%s", cliente->tel);
  getchar();
  while(!validaTel(cliente->tel)){  
    printf("Telefone inválido! Digite novamente: ");
    scanf("%s", cliente->tel);
    getchar();
  }

  printf("E-mail: ");
  scanf("%s", cliente->email);
  getchar();
  while(!validaEmail(cliente->email)){
    printf("Email inválido! Digite novamente: ");
    scanf("%s", cliente->email);
    getchar();
  }
  cliente->status ='1';

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  if(fread(cliente, sizeof(Cliente), 1, fp) == False){
    cliente->id = '1';
  } else {
    fseek(fp, -sizeof(Cliente), SEEK_END);
    fread(cliente, sizeof(Cliente), 1, fp);
    strcpy(cliente->id, id);
  }

  fwrite(cliente, sizeof(Cliente), 1, fp);
  fclose(fp);
  free(cliente);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar cliente

// Tela pesquisar cliente
void tela_pesquisar_clientes(void){
  char *cpf;
  cpf = (char*) malloc(12*sizeof(char));
  FILE *fp;
  fp = fopen("clientes.dat", "rb");
  Cliente *cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(Só números)\n");
  scanf("%s", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cpf);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(cliente, sizeof(Cliente), 1, fp)){
    if ((strcmp(cliente->cpf, cpf) == False) && (cliente->status == '1')){
      printf("CPF: %s\n", cliente->cpf);
      printf("Nome: %s\n", cliente->nome);
      printf("E-mail: %s\n", cliente->email);
      printf("Telefone: %s\n", cliente->tel);
      printf("Id: %s\n", cliente->id);
      printf("Status: %c\n", cliente->status);
    }
  }

  fclose(fp);
  free(cliente);
  free(cpf);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar cliente

// Tela atualizar cliente
void tela_atualizar_clientes(void){
  char *cpf;
  cpf = (char*) malloc(12*sizeof(char));
  FILE *fp;
  fp = fopen("clientes.dat", "rb");
  FILE *f;
  f = fopen("temp.dat", "wb");
  Cliente *cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Atualizar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(só números) ");
  scanf("%s", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cpf);
    getchar();
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(cliente, sizeof(Cliente), 1, fp)){
    if(strcmp(cliente->cpf, cpf) != 0){
      fwrite(cliente, sizeof(Cliente), 1, f);
    } else {
      char op;
      printf("O que deseja alterar? \n1 - Nome\n2 - Telefone\n3 - E-mail\n");
      scanf("%s", &op);
      getchar();
      while(!ehNum(&op) || op < '1' || op > '3'){
        printf("Escolha inválida! Digite novamente: ");
        scanf("%s", &op);
        getchar();
      }

      if(op == '1'){
        printf("Digite o novo nome: ");
        scanf("%s", cliente->nome);
        getchar();
        while(!validaNome(cliente->nome)){
          printf("Nome inválido! Digite novamente: ");
          scanf("%s", cliente->nome);
          getchar();
        }
      } else if (op == '2'){
        printf("Digite o novo telefone: ");
        scanf("%s", cliente->tel);
        getchar();
        while(!validaTel(cliente->tel)){
          printf("Telefone inválido! Digite novamente: ");
          scanf("%s", cliente->tel);
          getchar();
        }
      } else {
        printf("Digite o novo e-mail: ");
        scanf("%s", cliente->email);
        getchar();
        while(!validaEmail(cliente->email)){
          printf("E-mail inválido! Digite novamente: ");
          scanf("%s", cliente->email);
          getchar();
        }
      }
      fwrite(cliente, sizeof(Cliente), 1, f);
    }
  }

  free(cliente);
  free(cpf);
  fclose(f);
  fclose(fp);
  printf("abc");

  remove("clientes.dat");
  rename("temp.dat", "clientes.dat");
  
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela atualizar cliente

// Tela deletar cliente
void tela_deletar_clientes(void){
  char *cpf;
  char op;
  cpf = (char*) malloc(12*sizeof(char));
  FILE *fp;
  fp = fopen("clientes.dat", "rb");
  FILE *f;
  f = fopen("temp.dat", "wb");
  Cliente *cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Cliente - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(só números) ");
  scanf("%s", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cpf);
  }

  if(fp == NULL || f == NULL){
    printf("Arquivo não encontrado!");
  }

  printf("1 - Excluir permanentemente\n2 - Desativar o status ON do registro:\n");
  scanf("%s", &op);
  getchar();
  while(!ehNum(&op) || op < '1' || op > '2'){
    printf("Escolha inválida! Digite novamente: ");
    scanf("%s", &op);
    getchar();
  }

  if(op == '1'){
    while(fread(cliente, sizeof(Cliente), 1, fp)){
      printf("-1");
      if(strcmp(cliente->cpf, cpf) != 0){
        printf("%s", cliente->cpf);
        fwrite(cliente, sizeof(Cliente), 1, f);
        printf("%s", cliente->cpf);
      }
      // break;
      printf("1");
      // printf("%s", cliente->cpf);
    }
    printf("2");
    // printf("%s", cliente->cpf);
  } else {
    while(fread(cliente, sizeof(Cliente), 1, fp)){
      if(strcmp(cliente->cpf, cpf) == 0){
        cliente->status = '0';
      }
      fwrite(cliente, sizeof(Cliente), 1, f);
    }
  }
  // printf("3");

  fclose(fp);
  // printf("a");
  fclose(f);
  // printf("b");
  free(cliente);
  // printf("c");
  free(cpf);
  // printf("d");

  remove("clientes.dat");
  rename("temp.dat", "clientes.dat");

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar cliente
// Fim módulo clientes