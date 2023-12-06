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
  FILE* fp;
  fp = fopen("clientes.dat", "ab");
  
  // fseek(fp, -sizeof(Cliente), SEEK_END);
  // fread(&cliente, sizeof(Cliente), 1, fp);
  // strcpy(cliente->id, id);

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  printf("Nome: ");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕa-záéíóúâêôçàãõ ]", cliente->nome);
  getchar();
  while(!validaNome(cliente->nome)){
    printf("Nome inválido! Digite novamente: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕa-záéíóúâêôçàãõ ]", cliente->nome);
    getchar();
  }

  printf("CPF:(Só números) ");
  scanf("%[^\n]", cliente->cpf);
  getchar();
  while(!validaCPF(cliente->cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%[^\n]", cliente->cpf);
    getchar();
  }

  printf("Telefone:(Só números) ");
  scanf("%[^\n]", cliente->tel);
  getchar();
  while(!validaTel(cliente->tel)){  
    printf("Telefone inválido! Digite novamente: ");
    scanf("%[^\n]", cliente->tel);
    getchar();
  }

  printf("E-mail: ");
  scanf("%[a-z0-9@.]", cliente->email);
  getchar();
  while(!validaEmail(cliente->email)){
    printf("Email inválido! Digite novamente: ");
    scanf("%[a-z0-9@.]", cliente->email);
    getchar();
  }
  strcpy(cliente->status, "1");

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  if(fread(cliente, sizeof(Cliente), 1, fp) == False){
    strcpy(cliente->id, "1");
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
  char* cpf;
  cpf = (char*) malloc(12*sizeof(char));
  FILE* fp;
  fp = fopen("clientes.dat", "rb");
  Cliente* cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(Só números)\n");
  scanf("%[0-9]", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%[0-9]", cpf);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(cliente, sizeof(Cliente), 1, fp)){
    if ((strcmp(cliente->cpf, cpf) == False) && (strcmp(cliente->status, "1") == False)){
      fclose(fp);
      printf("CPF: %s\n", cliente->cpf);
      printf("Nome: %s\n", cliente->nome);
      printf("E-mail: %s\n", cliente->email);
      printf("Telefone: %s\n", cliente->tel);
      printf("Status: %s\n", cliente->status);
      printf("Id: %s\n", cliente->id);
    }
  }
  free(cliente);
  free(cpf);

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
  char *cpf;
  cpf = (char*) malloc(12*sizeof(char));
  FILE* fp;
  Cliente* cliente;
  cliente = (Cliente*) malloc(sizeof(cliente));

  Cliente* clienteLido;
  fp = fopen("clientes.dat", "r+b");

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Cliente - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(só números)\n");
  scanf("%[0-9]", cpf);
  getchar();
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente:\n");
    scanf("%s", cpf);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(clienteLido, sizeof(Cliente), 1, fp)){
    if ((strcmp(clienteLido->cpf, cpf) == 0) && (strcmp(clienteLido->status, "1") == False)){
      strcpy(clienteLido->nome, cliente->nome);
      strcpy(clienteLido->cpf, cliente->cpf);
      strcpy(clienteLido->tel, cliente->tel);
      strcpy(clienteLido->email, cliente->email);
      strcpy(cliente->status, "0");
      break;
    }
  }

  fseek(fp, -1*sizeof(Cliente), SEEK_CUR);
  fwrite(cliente, sizeof(Cliente), 1, fp);
  free(cliente);
  free(cpf);
  fclose(fp);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar cliente
// Fim módulo clientes